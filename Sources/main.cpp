//#include <QApplication>
//#define RUN 1
//#if RUN == 1
//#include "mainwindow.h"
//
//#else
//#include "CustomSignal.h"
//#endif
//int main(int argc, char *argv[])
//{
//    QApplication app(argc, argv);
//    #if RUN == 1
//    MainWindow win;
//    win.show();
//    #else
//    CustomSignal signal;
//    signal.mysignal();
//    #endif
//    return app.exec();
//}


#include "pclviewer.h"
#include <QApplication>
#include <QMainWindow>

int main (int argc, char *argv[])
{
    QApplication a (argc, argv);
    PCLViewer w;
    w.show ();

    return a.exec ();
}