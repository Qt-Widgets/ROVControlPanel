#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->centralWidget->setEnabled(true);
    ui->verticalLayout->setEnabled(true);
    ui->progressBar->setEnabled(true);
    ui->dial->setEnabled(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}
