#include"cpu.h"
#include"cpu.cpp"
#include"network.h"
#include"ram.h"
#include <QApplication>
#include<fstream>
#include<QTextEdit>
#include "mainwindow.h"
#include"mainwindow.cpp"
#include <fstream>
#include<QLabel>
#include<QVBoxLayout>
#include<QString>
#include <cstdlib>


using namespace std;


int main(int argc, char *argv[])
{
   QApplication a(argc, argv);
    MainWindow w;
    w.show();


    //return a.exec();

    std::vector<CPU::CPUData> entries1;
    std::vector<CPU::CPUData> entries2;

        CPU c;
        Network n;
        ram r;
        MainWindow ui;
         MainWindow ui_Net;
         MainWindow ui_ram;



        // snapshot 1
        c.ReadStatsCPU(entries1);

        // 100ms pause
        std::this_thread::sleep_for(std::chrono::milliseconds(100));

        // snapshot 2
        c.ReadStatsCPU(entries2);

        // print output
        ui.displayCPU(c.PrintStats(entries1,entries2));
        ui_Net.displayNet(n.printMAC());
        ui_ram.displayRAM(r.printRam());




        //std::this_thread::sleep_for(std::chrono::milliseconds(500));}

        return 0;
}
