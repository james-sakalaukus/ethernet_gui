#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_frequency_dial_valueChanged(int value)
{  
  this->ui->frequency_text_box->setText(QString::number(value));
}

void MainWindow::on_connect_button_clicked()
{
  printf("connect button pressed\n");
}
