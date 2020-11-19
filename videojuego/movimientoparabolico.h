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

public:
    movimientoParabolico(signed long long int angulo_ , signed long long velocidad_instantanea_);
    void getVelocidades();
    signed int obtenerCoordenadas(unsigned short int tiempo);
    signed int get_y_position();

};

#endif // MOVIMIENTOPARABOLICO_H
