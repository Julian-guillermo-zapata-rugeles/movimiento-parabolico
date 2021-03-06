#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <pelota.h>
#include <QGraphicsScene>
#include <QKeyEvent>
#include "movimientoparabolico.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    pelota *proyectil;
    pelota *proyectil2;
    pelota *proyectil3;
    movimientoParabolico *lanzamiento;
    movimientoParabolico *lanzamiento2;
    movimientoParabolico *lanzamiento3;
    //pelota *proyectil2;
    QGraphicsScene *scene;
    void keyPressEvent(QKeyEvent *evento);
};
#endif // MAINWINDOW_H
