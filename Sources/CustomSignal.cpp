//
// Created by 杜盛瑀 on 2018/2/8.
//

#include "Headers/CustomSignal.h"
#include "Headers/newpaper.h"
#include "Headers/reader.h"
void CustomSignal:: mysignal()
{
    Newspaper newspaper("Newspaper A");
    Reader reader;
    QObject::connect(&newspaper,&Newspaper::newPaper,&reader,&Reader::receiveNewspaper);
    newspaper.send();
}
