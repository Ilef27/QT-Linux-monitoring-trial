#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QString>
#include<QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void displayCPU(QString text);
    void displayNet(QString text);
    void displayRAM(QString text);


private slots:
    //void on_pushButton_clicked();



  //  void on_pushButton_2_clicked();


   // void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *timer;
};
#endif // MAINWINDOW_H
