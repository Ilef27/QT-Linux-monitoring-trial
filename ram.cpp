#include "ram.h"
#include<QString>
#include<QFile>
#include<QTextStream>
#include<QMessageBox>
#include<iostream>
#include"qstring.h"
#include<fstream>
ram::ram()
{

}

QString ram::printRam()
{
    QFile file("/proc/meminfo");
        if (!file.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"error", file.errorString());
        QTextStream in(&file);
        QString test=in.read(84);
        return test;


}
