#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_dialog = new Dialog();
    m_dialog2 = new Dialog2();
    m_dialog3 = new Dialog3();

    ui->stackedWidget->addWidget(m_dialog);
    ui->stackedWidget->addWidget(m_dialog2);
    ui->stackedWidget->addWidget(m_dialog3);
    ui-> stackedWidget->setCurrentIndex(1);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    change();
}


void MainWindow::on_pushButton_2_clicked()
{
    change();
}


void MainWindow::on_pushButton_3_clicked()
{
    change();
}

void MainWindow::change()
{
    //获取发送信号的按钮
    QPushButton *button = qobject_cast<QPushButton*>(sender());

    if(button==ui->pushButton)
    {
        ui->stackedWidget->setCurrentIndex(0);
        qDebug()<<"0";
    }
    else if(button==ui->pushButton_2)
    {
        ui->stackedWidget->setCurrentIndex(1);
         qDebug()<<"1";
    }
    else if(button==ui->pushButton_3)
    {
        ui->stackedWidget->setCurrentIndex(2);
         qDebug()<<"2";
    }
}

