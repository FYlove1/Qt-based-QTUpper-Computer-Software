/********************************************************************************
** Form generated from reading UI file 'main_widget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WIDGET_H
#define UI_MAIN_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Main_Widget
{
public:
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *LED1_checkBox;
    QCheckBox *LED2_checkBox;
    QCheckBox *LED3_checkBox;
    QCheckBox *LED4_checkBox;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *H_Value_LineEdit;
    QLineEdit *P_Value_LineEdit;
    QLineEdit *Light_Value_LineEdit;
    QLineEdit *Tem_Value_LineEdit;
    QLineEdit *Hum_Value_LineEdit;
    QGroupBox *groupBox_6;
    QSlider *Light_Slider;
    QSlider *Humidity_Slider;
    QSlider *Temperature_Slider;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QPushButton *Tmp_Set_PushButton;
    QPushButton *Hum_Set_PushButton;
    QPushButton *Light_Set_PushButton;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *IP_LineEdit;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *PORT_LineEdit;
    QTextEdit *UDP_Connect_TextEdit;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *UDP_Send_Push_Button;
    QPushButton *UDP_Close_Push_Button;

    void setupUi(QWidget *Main_Widget)
    {
        if (Main_Widget->objectName().isEmpty())
            Main_Widget->setObjectName("Main_Widget");
        Main_Widget->resize(866, 506);
        Main_Widget->setMinimumSize(QSize(600, 400));
        Main_Widget->setMaximumSize(QSize(1000, 600));
        Main_Widget->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        groupBox_3 = new QGroupBox(Main_Widget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(300, 300, 151, 181));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName("verticalLayout_2");
        LED1_checkBox = new QCheckBox(groupBox_3);
        LED1_checkBox->setObjectName("LED1_checkBox");

        verticalLayout_2->addWidget(LED1_checkBox);

        LED2_checkBox = new QCheckBox(groupBox_3);
        LED2_checkBox->setObjectName("LED2_checkBox");

        verticalLayout_2->addWidget(LED2_checkBox);

        LED3_checkBox = new QCheckBox(groupBox_3);
        LED3_checkBox->setObjectName("LED3_checkBox");

        verticalLayout_2->addWidget(LED3_checkBox);

        LED4_checkBox = new QCheckBox(groupBox_3);
        LED4_checkBox->setObjectName("LED4_checkBox");

        verticalLayout_2->addWidget(LED4_checkBox);

        groupBox_5 = new QGroupBox(Main_Widget);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setGeometry(QRect(580, 30, 251, 181));
        horizontalLayout_5 = new QHBoxLayout(groupBox_5);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_7 = new QLabel(groupBox_5);
        label_7->setObjectName("label_7");

        verticalLayout_4->addWidget(label_7);

        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName("label_8");

        verticalLayout_4->addWidget(label_8);

        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName("label_9");

        verticalLayout_4->addWidget(label_9);

        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName("label_10");

        verticalLayout_4->addWidget(label_10);

        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName("label_11");

        verticalLayout_4->addWidget(label_11);


        horizontalLayout_5->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        H_Value_LineEdit = new QLineEdit(groupBox_5);
        H_Value_LineEdit->setObjectName("H_Value_LineEdit");

        verticalLayout_5->addWidget(H_Value_LineEdit);

        P_Value_LineEdit = new QLineEdit(groupBox_5);
        P_Value_LineEdit->setObjectName("P_Value_LineEdit");

        verticalLayout_5->addWidget(P_Value_LineEdit);

        Light_Value_LineEdit = new QLineEdit(groupBox_5);
        Light_Value_LineEdit->setObjectName("Light_Value_LineEdit");

        verticalLayout_5->addWidget(Light_Value_LineEdit);

        Tem_Value_LineEdit = new QLineEdit(groupBox_5);
        Tem_Value_LineEdit->setObjectName("Tem_Value_LineEdit");

        verticalLayout_5->addWidget(Tem_Value_LineEdit);

        Hum_Value_LineEdit = new QLineEdit(groupBox_5);
        Hum_Value_LineEdit->setObjectName("Hum_Value_LineEdit");

        verticalLayout_5->addWidget(Hum_Value_LineEdit);


        horizontalLayout_5->addLayout(verticalLayout_5);

        groupBox_6 = new QGroupBox(Main_Widget);
        groupBox_6->setObjectName("groupBox_6");
        groupBox_6->setGeometry(QRect(480, 310, 381, 161));
        Light_Slider = new QSlider(groupBox_6);
        Light_Slider->setObjectName("Light_Slider");
        Light_Slider->setGeometry(QRect(40, 130, 160, 16));
        Light_Slider->setOrientation(Qt::Orientation::Horizontal);
        Humidity_Slider = new QSlider(groupBox_6);
        Humidity_Slider->setObjectName("Humidity_Slider");
        Humidity_Slider->setGeometry(QRect(40, 90, 160, 16));
        Humidity_Slider->setOrientation(Qt::Orientation::Horizontal);
        Temperature_Slider = new QSlider(groupBox_6);
        Temperature_Slider->setObjectName("Temperature_Slider");
        Temperature_Slider->setGeometry(QRect(40, 50, 160, 16));
        Temperature_Slider->setOrientation(Qt::Orientation::Horizontal);
        label_12 = new QLabel(groupBox_6);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(40, 30, 111, 16));
        label_13 = new QLabel(groupBox_6);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(40, 70, 111, 16));
        label_14 = new QLabel(groupBox_6);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(40, 110, 111, 16));
        Tmp_Set_PushButton = new QPushButton(groupBox_6);
        Tmp_Set_PushButton->setObjectName("Tmp_Set_PushButton");
        Tmp_Set_PushButton->setGeometry(QRect(210, 40, 75, 23));
        Hum_Set_PushButton = new QPushButton(groupBox_6);
        Hum_Set_PushButton->setObjectName("Hum_Set_PushButton");
        Hum_Set_PushButton->setGeometry(QRect(210, 80, 75, 23));
        Light_Set_PushButton = new QPushButton(groupBox_6);
        Light_Set_PushButton->setObjectName("Light_Set_PushButton");
        Light_Set_PushButton->setGeometry(QRect(210, 120, 75, 23));
        pushButton_6 = new QPushButton(groupBox_6);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(290, 40, 75, 23));
        pushButton_7 = new QPushButton(groupBox_6);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(290, 80, 75, 23));
        pushButton_8 = new QPushButton(groupBox_6);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(290, 120, 75, 23));
        layoutWidget = new QWidget(Main_Widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 300, 221, 191));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        groupBox_4 = new QGroupBox(layoutWidget);
        groupBox_4->setObjectName("groupBox_4");
        verticalLayout_3 = new QVBoxLayout(groupBox_4);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName("label_3");

        verticalLayout_3->addWidget(label_3);

        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName("label_4");

        verticalLayout_3->addWidget(label_4);

        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName("label_5");

        verticalLayout_3->addWidget(label_5);

        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName("label_6");

        verticalLayout_3->addWidget(label_6);


        horizontalLayout_4->addWidget(groupBox_4);

        layoutWidget1 = new QWidget(Main_Widget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 0, 561, 281));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget1);
        groupBox->setObjectName("groupBox");
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        IP_LineEdit = new QLineEdit(groupBox);
        IP_LineEdit->setObjectName("IP_LineEdit");

        horizontalLayout->addWidget(IP_LineEdit);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(layoutWidget1);
        groupBox_2->setObjectName("groupBox_2");
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        PORT_LineEdit = new QLineEdit(groupBox_2);
        PORT_LineEdit->setObjectName("PORT_LineEdit");

        horizontalLayout_2->addWidget(PORT_LineEdit);


        verticalLayout->addWidget(groupBox_2);

        UDP_Connect_TextEdit = new QTextEdit(layoutWidget1);
        UDP_Connect_TextEdit->setObjectName("UDP_Connect_TextEdit");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(UDP_Connect_TextEdit->sizePolicy().hasHeightForWidth());
        UDP_Connect_TextEdit->setSizePolicy(sizePolicy);
        UDP_Connect_TextEdit->setMinimumSize(QSize(100, 60));
        UDP_Connect_TextEdit->setMaximumSize(QSize(600, 400));

        verticalLayout->addWidget(UDP_Connect_TextEdit);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        horizontalLayout_3->setContentsMargins(-1, 1, -1, -1);
        UDP_Send_Push_Button = new QPushButton(layoutWidget1);
        UDP_Send_Push_Button->setObjectName("UDP_Send_Push_Button");

        horizontalLayout_3->addWidget(UDP_Send_Push_Button);

        UDP_Close_Push_Button = new QPushButton(layoutWidget1);
        UDP_Close_Push_Button->setObjectName("UDP_Close_Push_Button");

        horizontalLayout_3->addWidget(UDP_Close_Push_Button);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(Main_Widget);

        QMetaObject::connectSlotsByName(Main_Widget);
    } // setupUi

    void retranslateUi(QWidget *Main_Widget)
    {
        Main_Widget->setWindowTitle(QCoreApplication::translate("Main_Widget", "Main_Widget", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Main_Widget", "GroupBox", nullptr));
        LED1_checkBox->setText(QCoreApplication::translate("Main_Widget", "CheckBox", nullptr));
        LED2_checkBox->setText(QCoreApplication::translate("Main_Widget", "CheckBox", nullptr));
        LED3_checkBox->setText(QCoreApplication::translate("Main_Widget", "CheckBox", nullptr));
        LED4_checkBox->setText(QCoreApplication::translate("Main_Widget", "CheckBox", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("Main_Widget", "GroupBox", nullptr));
        label_7->setText(QCoreApplication::translate("Main_Widget", "H", nullptr));
        label_8->setText(QCoreApplication::translate("Main_Widget", "P", nullptr));
        label_9->setText(QCoreApplication::translate("Main_Widget", "light", nullptr));
        label_10->setText(QCoreApplication::translate("Main_Widget", "tem", nullptr));
        label_11->setText(QCoreApplication::translate("Main_Widget", "hum", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("Main_Widget", "GroupBox", nullptr));
        label_12->setText(QCoreApplication::translate("Main_Widget", "\346\270\251\345\272\246\346\212\245\350\255\246\351\230\210\345\200\274", nullptr));
        label_13->setText(QCoreApplication::translate("Main_Widget", "\346\271\277\345\272\246\345\272\246\346\212\245\350\255\246\351\230\210\345\200\274", nullptr));
        label_14->setText(QCoreApplication::translate("Main_Widget", "\345\205\211\345\274\272\345\274\200\347\201\257\351\230\210\345\200\274", nullptr));
        Tmp_Set_PushButton->setText(QCoreApplication::translate("Main_Widget", "tmp_set", nullptr));
        Hum_Set_PushButton->setText(QCoreApplication::translate("Main_Widget", "hum_set", nullptr));
        Light_Set_PushButton->setText(QCoreApplication::translate("Main_Widget", "light_set", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Main_Widget", "PushButton", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Main_Widget", "PushButton", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Main_Widget", "PushButton", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Main_Widget", "GroupBox", nullptr));
        label_3->setText(QCoreApplication::translate("Main_Widget", "LED1", nullptr));
        label_4->setText(QCoreApplication::translate("Main_Widget", "LED2", nullptr));
        label_5->setText(QCoreApplication::translate("Main_Widget", "LED3", nullptr));
        label_6->setText(QCoreApplication::translate("Main_Widget", "ALARM", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Main_Widget", "GroupBox", nullptr));
        label->setText(QCoreApplication::translate("Main_Widget", "IP", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Main_Widget", "GroupBox", nullptr));
        label_2->setText(QCoreApplication::translate("Main_Widget", "PORT", nullptr));
        PORT_LineEdit->setText(QString());
        UDP_Send_Push_Button->setText(QCoreApplication::translate("Main_Widget", "SEND", nullptr));
        UDP_Close_Push_Button->setText(QCoreApplication::translate("Main_Widget", "CLOSE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Main_Widget: public Ui_Main_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WIDGET_H
