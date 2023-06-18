#include "mainwindow.h"
#include "ui_mkkm.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_calc_clicked()
{
    if(ui->km->text().isEmpty()){
    }
        else {

    QString Coup = ui->km->text();
    double CouponRate = Coup.toDouble();
    if(CouponRate==0){}
    else {
    double CouponRate1 = CouponRate * 1.609344;
    ui->mk->setText(QString::number(CouponRate1));
    }
}
}


void MainWindow::on_calc_2_clicked()
{
    if(ui->mk->text().isEmpty()){
    }
        else {

    QString Coup = ui->mk->text();
    double CouponRate = Coup.toDouble();
    if(CouponRate==0){}
    else {
    double CouponRate1 = CouponRate * 0.621371192;
    ui->km->setText(QString::number(CouponRate1));
    }
}
}


void MainWindow::on_action_Alap_km_triggered()
{
    ui->km->setText(QString::number(1));
    MainWindow::on_calc_clicked();
}


void MainWindow::on_actionA_lap_mk_triggered()
{
    ui->mk->setText(QString::number(1));
    MainWindow::on_calc_2_clicked();
}

