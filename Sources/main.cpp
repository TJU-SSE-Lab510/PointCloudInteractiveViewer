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



#include "pclvisualizer.h"
#include "pclviewer.h"
#include <QtWidgets/QApplication>
#include <QMainWindow>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PCLVisualizer w;
    
// First Demo from https://github.com/UnaNancyOwen/qt_visualizer
//    PCLViewer w;

    w.show();
    return a.exec();
}