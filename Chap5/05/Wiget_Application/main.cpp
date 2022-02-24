#include "mainwindow.h"

#include <QApplication>
#include <QtGui>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QScopedPointer<QWidget> widget(new CustomWidget());
    widget->resize(240, 120);
    widget->show();
    return app.exec();

    //QApplication app(argc, argv);
    //QScopedPointer<QWidget> widget(new CustomWidget());
    //widget->resize(240,120);

//    widget.show();
    //MainWindow w;
//    return app.exec();
}
