#ifndef DATAMODEL_H
#define DATAMODEL_H

#include <QObject>
#include <QHostAddress>
#include <QMutex>
#include <QString>
#include <winsock2.h> // 包含 WinSock2 头文件以使用 sockaddr_in

class DataModel : public QObject {
    Q_OBJECT

public:
    // 构造函数
    explicit DataModel(QObject *parent = nullptr);

    ~DataModel();

    // 设置数据的方法
    void setData(double temperature, double humidity, double lightIntensity, double pressure, double altitude, const QHostAddress &host, quint16 port, const QString &message);

    // 获取所有数据的方法
    void getData(double &temperature, double &humidity, double &lightIntensity, double &pressure, double &altitude, QHostAddress &host, quint16 &port, QString &message) const;

    signals:
        // 数据改变信号
        void dataChanged(double temperature, double humidity, double lightIntensity, double pressure, double altitude, const QHostAddress &host, quint16 port, const QString &message);

private:
    mutable QMutex m_mutex; // 用于保护数据成员
    double temperature;     // 温度 (℃)
    double humidity;        // 湿度 (%)
    double lightIntensity;  // 光强 (lux)
    double pressure;        // 气压 (hPa)
    double altitude;        // 海拔 (m)
    QString message;        // 接收到的消息
    QHostAddress host;      // 地址
    quint16 port;           // 端口

    // 辅助函数：将 QHostAddress 和 quint16 转换为 sockaddr_in
    sockaddr_in createSocketAddress(const QHostAddress& host, quint16 port) const;

    // 辅助函数：将 sockaddr_in 转换为 QHostAddress 和 quint16
    void parseSocketAddress(const sockaddr_in& addr, QHostAddress& host, quint16& port) const;
};

#endif // DATAMODEL_H