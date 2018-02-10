//
// Created by 杜盛瑀 on 2018/2/8.
//

#include "Headers/mainwindow.h"
#include "Headers/ui_mainwindow.h"

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


