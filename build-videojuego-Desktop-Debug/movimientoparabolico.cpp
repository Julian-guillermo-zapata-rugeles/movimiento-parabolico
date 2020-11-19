#include "movimientoparabolico.h"
#include <iostream>

movimientoParabolico::movimientoParabolico(signed long long angulo_, signed long long velocidad_instantanea_)
{
    movimientoParabolico::angulo=angulo_;
    movimientoParabolico::velocidad_inicial_x =velocidad_instantanea_ * cos((angulo_*3.1416)/180);
    movimientoParabolico::velocidad_inicial_y =velocidad_instantanea_ * sin((angulo_*3.1416)/180);
    movimientoParabolico::tmp = 0;
}

void movimientoParabolico::getVelocidades()
{
    std::cout << "angulo "<<angulo << std::endl;
    std::cout << "x "<<velocidad_inicial_x << std::endl;
    std::cout << "y "<<velocidad_inicial_y << std::endl;
}

signed int movimientoParabolico::obtenerCoordenadas(unsigned short int tiempo)
{
    posicion_x = velocidad_inicial_x*tiempo;
    posicion_y=tmp+velocidad_inicial_y*tiempo+(0.5*(-10*tiempo*tiempo));

    std::cout << "posicion x -> "<< posicion_x << std::endl;
    std::cout << "posicion y -> "<< posicion_y << std::endl;
    return 0;
}

signed int movimientoParabolico::get_y_position()
{
    return posicion_y;
}
