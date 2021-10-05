#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFile>
#include<QTextStream>
#include<QMessageBox>
#include<iostream>
#include"qstring.h"
#include<fstream>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer = new  QTimer(this);
    timer->start(500);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::displayCPU(QString text)
{
    ui->textBrowser->setText(text);
}

void MainWindow::displayNet(QString text)
{
    ui->textBrowser_2->setText(text);
}

void MainWindow::displayRAM(QString text)
{
    ui->textBrowser_3->setText(text);
}


