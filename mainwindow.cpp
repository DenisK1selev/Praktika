#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secondwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new Scene();
    ui->graphicsView->setScene(scene);
    QBrush back(Qt::lightGray);
    ui->graphicsView->setBackgroundBrush(back);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    SecondWindow window;
    window.setModal(true);
    window.exec();
}
