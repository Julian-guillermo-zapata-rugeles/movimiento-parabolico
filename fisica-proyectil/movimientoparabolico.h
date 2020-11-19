/*
Autor : Julián Guillermo Zapata Rugeles
      
Trayectoria de proyectiles disparados dado un angulo y velocidad instantanea


*/
#ifndef MOVIMIENTOPARABOLICO_H
#define MOVIMIENTOPARABOLICO_H
#include <math.h>

class movimientoParabolico
{
    unsigned short int angulo;
    double tiempo;
    signed int posicion_x;
    signed int posicion_y;
    signed int velocidad_inicial_x;
    signed int velocidad_inicial_y;
    signed short int velocidad_instantanea ;
    double altura_maxima;
    double velocidad_horizontal;
    double altura_alcanzada;

public:

    /*MovimientoParaboico :
     *recibe un angulo entre 0 y 360 grados NO NEGATIVO. velocidad instantanea del proyectil en M/s */
    movimientoParabolico(signed long long int angulo_ , signed long long velocidad_instantanea_);
    /*setCoordenadas :
     *recibe un double que representa el tiempo puede darse en milesimas de segundo , se usará para mover el proyectil*/
    void setMovimiento(double tiempo_); // ok
    void imprimir_coordenadas();

    /*ACCESOS*/
    signed int getXposition(); // retonarna un entero que representa la coordenada x /ok
    signed int getYposition(); // retonarna un entero que representa la coordenada y /ok

    signed short getVelocidad_instantanea() const;
    void setVelocidad_instantanea(signed short value);
};

#endif // MOVIMIENTOPARABOLICO_H
