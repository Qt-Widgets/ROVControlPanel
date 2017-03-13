#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->progressBar->setEnabled(true);
    ui->horizontalSlider->setEnabled(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}
