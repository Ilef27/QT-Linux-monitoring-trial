#include "network.h"
#include<QString>
#include<QFile>
#include<QTextStream>
#include<QMessageBox>
#include<iostream>
#include"qstring.h"
#include<fstream>

Network::Network()
{

}

QString Network::printMAC()
{

    QFile file("/sys/class/net/enp2s0/address");
        if (!file.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"error", file.errorString());
        QTextStream in(&file);
        QString str= "MAC address:";
        str= str + in.readAll()+"\n";
        return str;

}



