#include "pelota.h"

pelota::pelota()
{

}

// ########################## CONSTRUCTOR SOBRECARGADO ###########################

pelota::pelota(unsigned short radio_, signed long long x_, signed long long y_ , signed short int v_)
{
    radio = radio_ ;
    posicion_x = x_ ;
    posicion_y = y_ ;
    velocity = v_ ;
    setPos(posicion_x,posicion_y);
}





/*
###################################################################################

                            MOVIMIENTOS DEL PROYECTIL

###################################################################################
*/
void pelota::mover_izquierda()
{
    posicion_x=posicion_x-velocity;
    setPos(posicion_x,posicion_y);
}

void pelota::mover_derecha()
{
    posicion_x=posicion_x+velocity;
    setPos(posicion_x,posicion_y);
}

void pelota::mover_arriba()
{
    posicion_y=posicion_y-velocity;
    setPos(posicion_x,posicion_y);
}

void pelota::mover_abajo()
{
    posicion_y=posicion_y+velocity;
    setPos(posicion_x,posicion_y);
}

void pelota::mover_proyectil(signed long long x, signed long long y)
{
    posicion_x=x;
    posicion_y=y;
    setPos(posicion_x,posicion_y);
}
// #################################################################################








QRectF pelota::boundingRect() const
{
    return QRectF(- radio,- radio,2*radio,2*radio);
}

void pelota::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::blue);
    painter->drawEllipse(boundingRect());
}
