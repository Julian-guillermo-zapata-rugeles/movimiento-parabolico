#ifndef PELOTA_H
#define PELOTA_H

#include <QGraphicsItem>
#include <QPainter>

class pelota : public QGraphicsItem
{
    unsigned short int radio ;
    signed long long int posicion_x ;
    signed long long int posicion_y ;
    signed short int velocity ;

public:
    pelota();
    pelota(unsigned short int radio_ , signed long long int x_ , signed long long y_ , signed short int v);
    void mover_izquierda();
    void mover_derecha();
    void mover_arriba();
    void mover_abajo();

    QRectF boundingRect() const override;
    void paint(QPainter *painter , const QStyleOptionGraphicsItem *option ,QWidget *widget =nullptr);

};

#endif // PELOTA_H
