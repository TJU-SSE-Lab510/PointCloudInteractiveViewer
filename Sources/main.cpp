#include <QApplication>
#include "CustomSignal.h"
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    CustomSignal signal;
    signal.mysignal();
    return app.exec();
}