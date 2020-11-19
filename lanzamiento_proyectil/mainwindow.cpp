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

    lanzamiento = new movimientoParabolico(110,60);
    lanzamiento2 = new movimientoParabolico(56,130);
    lanzamiento3 = new movimientoParabolico(97,120);
    ui->graphicsView->setScene(scene);
    scene->setSceneRect(0,0,740,500);
    proyectil = new pelota(10,300,500,10);
    proyectil2 = new pelota(10,300,500,10);
    proyectil3 = new pelota(10,-300,500,10);
    //proyectil2 = new pelota(20,340,250,5);
    scene->addItem(proyectil);
    scene->addItem(proyectil2);
    scene->addItem(proyectil3);
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
    else if(evento->key()==Qt::Key_Space){
            lanzamiento->obtenerCoordenadas(lanzamiento->agregar_tiempo(0.1));
            proyectil->mover_proyectil(300+lanzamiento->get_x_position(),500-lanzamiento->get_y_position());

            lanzamiento2->obtenerCoordenadas(lanzamiento2->agregar_tiempo(0.1));
            proyectil2->mover_proyectil(280+lanzamiento2->get_x_position(),500-lanzamiento2->get_y_position());

            lanzamiento3->obtenerCoordenadas(lanzamiento3->agregar_tiempo(0.1));
            proyectil3->mover_proyectil(290+lanzamiento2->get_x_position(),500-lanzamiento3->get_y_position());
            //system("sleep 1");
        }
}

