#include "DataModel.h"
#include <QDebug>

// 确保 WinSock 库被初始化
#ifdef _WIN32
#include <winsock2.h>
#pragma comment(lib, "ws2_32.lib") // 链接 WinSock 库
#endif

// 构造函数
DataModel::DataModel(QObject *parent) :
    QObject(parent),
    temperature(0.0),
    humidity(0.0),
    lightIntensity(0.0),
    pressure(0.0),
    altitude(0.0),
    message(""),
    host(QHostAddress()),
    port(0)
{
    // 初始化 WinSock 库（仅在 Windows 上）
#ifdef _WIN32
    WSADATA wsaData;
    int result = WSAStartup(MAKEWORD(2, 2), &wsaData);
    if (result != 0) {
        qDebug() << "WSAStartup failed:" << result;
        return;
    }
#endif
}

// 析构函数（确保 WinSock 库被清理）
DataModel::~DataModel() {
#ifdef _WIN32
    WSACleanup();
#endif
}

// 设置数据的方法
void DataModel::setData(double temp, double humi, double light, double press, double alti, const QHostAddress &hst, quint16 prt, const QString &msg) {
    // 使用 QMutexLocker 自动管理互斥锁
    QMutexLocker locker(&m_mutex);
    temperature = temp;
    humidity = humi;
    lightIntensity = light;
    pressure = press;
    altitude = alti;
    message = msg;
    host = hst;
    port = prt;
    // 发射数据改变信号
    emit dataChanged(temp, humi, light, press, alti, hst, prt, msg);
}

// 获取所有数据的方法
void DataModel::getData(double &temp, double &humi, double &light, double &press, double &alti, QHostAddress &hst, quint16 &prt, QString &msg) const {
    // 使用 QMutexLocker 自动管理互斥锁
    QMutexLocker locker(&m_mutex);
    temp = temperature;
    humi = humidity;
    light = lightIntensity;
    press = pressure;
    alti = altitude;
    msg = message;
    hst = host;
    prt = port;
}

// 辅助函数：将 QHostAddress 和 quint16 转换为 sockaddr_in
sockaddr_in DataModel::createSocketAddress(const QHostAddress& host, quint16 port) const {
    sockaddr_in addr;
    memset(&addr, 0, sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_port = htons(port);
    if (host.protocol() == QAbstractSocket::IPv4Protocol) {
        addr.sin_addr.s_addr = host.toIPv4Address();
    } else {
        qDebug() << "Unsupported address family.";
    }
    return addr;
}

// 辅助函数：将 sockaddr_in 转换为 QHostAddress 和 quint16
void DataModel::parseSocketAddress(const sockaddr_in& addr, QHostAddress& host, quint16& port) const {
    host = QHostAddress(ntohl(addr.sin_addr.s_addr));
    port = ntohs(addr.sin_port);
}