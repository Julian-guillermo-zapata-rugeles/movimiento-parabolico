#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QKeyEvent>
#include <cstdlib>
#include "pelota.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new QGraphicsScene;
    ui->graphicsView->setScene(scene);
    scene->setSceneRect(0,0,500,500);
    proyectil = new pelota(20,240,250,5);
    proyectil2 = new pelota(20,340,250,5);
    scene->addItem(proyectil);
    //scene->addItem(proyectil2);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *evento)
{
    if (evento->key()==Qt::Key_A) {
         proyectil->mover_izquierda();
          //proyectil2->mover_derecha();
         //system("notify-send detected");
    }
    else if(evento->key()==Qt::Key_D) {
        proyectil->mover_derecha();
         //proyectil2->mover_izquierda();
        //system("notify-send detected");
    }
    else if(evento->key()==Qt::Key_W) {
        proyectil->mover_arriba();
        //proyectil2->mover_abajo();
        //system("notify-send detected");
    }
    else if(evento->key()==Qt::Key_S) {
        proyectil->mover_abajo();
        //proyectil2->mover_arriba();
        //system("notify-send detected");
    }
}

