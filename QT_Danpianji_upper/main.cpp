#include <QApplication>
#include "main_widget.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    Main_Widget w;
    w.show();

    return a.exec();
}