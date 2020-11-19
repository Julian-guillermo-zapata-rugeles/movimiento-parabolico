/*
Julián Guillermo Zapata Rugeles
librería movimiento parabólico

*/
#ifndef MOVIMIENTOPARABOLICO_H
#define MOVIMIENTOPARABOLICO_H
#include <math.h>

class movimientoParabolico
{
    signed long long int posicion_x;
    signed long long int posicion_y;
    signed long long int tmp;
    signed long long int velocidad_inicial_x;
    signed long long int velocidad_inicial_y;
    signed short int angulo;
    signed short int velocidad_instantanea ;
    double tiempo;

public:
    movimientoParabolico(signed long long int angulo_ , signed long long velocidad_instantanea_);
    void getVelocidades();
    int obtenerCoordenadas(double tiempo_);
    signed int get_y_position();
    signed int get_x_position();
    double agregar_tiempo(double);

};

#endif // MOVIMIENTOPARABOLICO_H
