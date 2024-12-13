#ifndef MAIN_WIDGET_H
#define MAIN_WIDGET_H

#include <QWidget>
#include <ui_Main_Widget.h>
#include "UDP_Connect/UDP_Connect.h"
#include <thread>
#include <QHostAddress>
#include <QString>
#include "UDP_Connect/DataModel.h"

namespace Ui {
    class Main_Widget;
}

class Main_Widget : public QWidget {
    Q_OBJECT

public:
    explicit Main_Widget(QWidget *parent = nullptr);
    ~Main_Widget();

    private slots:
        void on_UDP_Send_Push_Button_clicked();
    void handleReceivedData(double temperature, double humidity, double lightIntensity, double pressure, double altitude, const QHostAddress &host, quint16 port, const QString &message);

private:
    Ui::Main_Widget *ui;
    UDP_Connect connect_main;
    sockaddr_in recipient;
    std::thread receiverThread;
    DataModel dataModel;

    void startReceiverThread();
    static void runReceiver(UDP_Connect* udpConnect, DataModel* dataModel);
};

#endif // MAIN_WIDGET_H