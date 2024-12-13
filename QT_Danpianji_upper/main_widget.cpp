#include "main_widget.h"
#include "ui_Main_Widget.h"
#include <QString>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>

Main_Widget::Main_Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Main_Widget),
    connect_main(),
    recipient(),
    dataModel(this)
{
    ui->setupUi(this);

    // 包含的需要用的数据
    QString Massage_Send = "Hello World!";

    ////////////// UDP /////////////////
    // UDP 连接 初始化
    if (!connect_main.initialize()) {
        qDebug() << "Initialization failed.";
        return;
    }

    // 绑定端口
    if (!connect_main.bindSocket(8880)) {
        qDebug() << "Failed to bind server socket.";
        return;
    }

    // udp 发送 地址 初始化
    memset(&recipient, 0, sizeof(recipient));  // 初始化结构体
    recipient.sin_family = AF_INET;            // 地址族为 IPv4
    recipient.sin_port = htons(12012);         // 目标端口，转换为网络字节序
    recipient.sin_addr.s_addr = inet_addr("127.0.0.1");  // 目标 IP 地址

    // 槽连接
    connect(ui->UDP_Send_Push_Button, &QPushButton::clicked, this, &Main_Widget::on_UDP_Send_Push_Button_clicked);
    connect(&dataModel, &DataModel::dataChanged, this, &Main_Widget::handleReceivedData);

    // 启动接收线程
    startReceiverThread();
}

Main_Widget::~Main_Widget() {
    delete ui;
    if (receiverThread.joinable()) {
        receiverThread.join();
    }
}

////////////////////////信号响应函数/////////////////////////////

void Main_Widget::on_UDP_Send_Push_Button_clicked() {
    // 改变端口和IP地址
    int Port_from_UI = ui->PORT_LineEdit->text().toInt();
    QString IP_form_UI = ui->IP_LineEdit->text();

    memset(&recipient, 0, sizeof(recipient));  // 初始化结构体
    recipient.sin_family = AF_INET;            // 地址族为 IPv4
    recipient.sin_port = htons(Port_from_UI);         // 目标端口，转换为网络字节序
    recipient.sin_addr.s_addr = inet_addr(IP_form_UI.toStdString().c_str());  // 目标 IP 地址

    qDebug()<<"当前 接收端 的 ip"<<IP_form_UI<<"端口"<<Port_from_UI;


    QString Massage_Send = ui->UDP_Connect_TextEdit->toPlainText();
    for(int i = 0; i < 8; i++) {
        // 发送测试
        int Send_to_Number = connect_main.sendData((char*)Massage_Send.toStdString().c_str(), Massage_Send.size(), recipient);
        if (Send_to_Number == SOCKET_ERROR) {
            qDebug() << "Send failed:" << WSAGetLastError();
        } else {
            qDebug() << "Sent to" << inet_ntoa(recipient.sin_addr) << ":" << ntohs(recipient.sin_port) << ": " << Massage_Send;
        }

    }
}
/////////////////////////////////////////////////////////////


////////////////////接收UDP数据相关成员函数(线程相关)////////////////////////
void Main_Widget::startReceiverThread() {
    receiverThread = std::thread(runReceiver, &connect_main, &dataModel);
}


void Main_Widget::runReceiver(UDP_Connect* udpConnect, DataModel* dataModel) {
    char buffer[1024];
    sockaddr_in sender;

    while (true) {
        int bytesReceived = udpConnect->receiveData(buffer, sizeof(buffer), sender);
        if (bytesReceived > 0) {
            buffer[bytesReceived] = '\0'; // Null-terminate the received data
            QString receivedData = QString::fromUtf8(buffer);

            // 在这里可以对 receivedData 进行进一步处理
            // 例如，存储到某个变量中或进行其他操作
            qDebug() << "Received data:" << receivedData;

            // 示例：假设你需要在这里进行一些处理
            // 例如，提取特定字段或进行其他逻辑操作
            // 这里暂时留空，你可以根据需要添加代码
        } else {
            qDebug() << "Receive failed: " << WSAGetLastError();
            break;
        }
    }
}

void Main_Widget::handleReceivedData(double temperature, double humidity, double lightIntensity, double pressure, double altitude, const QHostAddress &host, quint16 port, const QString &message) {
    qDebug() << "Received from" << host.toString() << ":" << port << ":";
    qDebug() << "Temperature:" << temperature;
    qDebug() << "Humidity:" << humidity;
    qDebug() << "Light Intensity:" << lightIntensity;
    qDebug() << "Pressure:" << pressure;
    qDebug() << "Altitude:" << altitude;
    qDebug() << "Message:" << message;

    // 在这里可以更新 UI 或进一步处理数据
}

///////////////////////////////////////////////////////////