//
// Created by 杜盛瑀 on 2018/2/8.
//

#include "CustomSignal.h"
#include "newpaper.h"
#include "reader.h"
void CustomSignal:: mysignal()
{
    Newspaper newspaper("Newspaper A");
    Reader reader;
    QObject::connect(&newspaper,&Newspaper::newPaper,&reader,&Reader::receiveNewspaper);
    newspaper.send();
}
