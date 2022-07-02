#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secondwindow.h"
#include "scene.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new Scene();
    ui->graphicsView->setScene(scene);
    QBrush back(Qt::lightGray);
    ui->graphicsView->setBackgroundBrush(back);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    scene->setSceneRect(-40,40,80,80);

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


void MainWindow::on_pushButton_2_clicked()
{
    scene->clear();
    scene->points.clear();
}

