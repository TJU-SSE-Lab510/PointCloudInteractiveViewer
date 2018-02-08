#include <QApplication>
#include "newpaper.h"
#include "reader.h"
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Newspaper newspaper("Newspaper A");
    Reader reader;
    QObject::connect(&newspaper,&Newspaper::newPaper,&reader,&Reader::receiveNewspaper);
    newspaper.send();
    return app.exec();
}