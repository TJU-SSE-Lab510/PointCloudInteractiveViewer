//
// Created by 杜盛瑀 on 2018/2/7.
//

#ifndef NEWPAPER_H
#define NEWPAPER_H
#include <QObject>
class Newspaper:public QObject{
Q_OBJECT
public:
    Newspaper(const QString & name):m_name(name){

    }

    void send(){
        emit newPaper(m_name);
    }
signals:
    void newPaper(const QString &m_name);
private:
    QString m_name;
};
#endif // NEWPAPER_H

