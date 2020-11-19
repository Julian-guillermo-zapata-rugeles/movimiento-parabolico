#include "movimientoparabolico.h"
#include <iostream>
#include <math.h>


movimientoParabolico::movimientoParabolico(signed long long angulo_, signed long long velocidad_instantanea_)
{
    angulo=angulo_;
    velocidad_inicial_x = velocidad_instantanea_ * cos((angulo_*3.1416)/180);
    velocidad_inicial_y = velocidad_instantanea_ * sin((angulo_*3.1416)/180);
    velocidad_horizontal = 0 ;
    altura_alcanzada=0;
    tiempo=0;
    altura_maxima= ((sin((angulo_*3.1416)/180)*(sin((angulo_*3.1416)/180)))*(velocidad_instantanea_*velocidad_instantanea_))/(9.8*2) ;
}


void movimientoParabolico::setMovimiento(double tiempo_)
{
    posicion_x = float(velocidad_inicial_x*tiempo);
    posicion_y=float(0+velocidad_inicial_y*tiempo+(0.5*(-9.8*tiempo*tiempo)));
    std::cout << "Avance Metros en  X -> "<< posicion_x << std::endl;
    std::cout << "Avance Metros en  Y -> "<< posicion_y << std::endl;
    tiempo=tiempo+tiempo_;
    velocidad_horizontal=posicion_x/tiempo;


}

void movimientoParabolico::imprimir_coordenadas()
{
    std::cout << "Angulo de salida -> "<<angulo << std::endl;
    std::cout << "Avanzando  "<< velocidad_horizontal <<" m/s  sobre el plano horizontal"<< std::endl;
    if(altura_alcanzada < posicion_y){

        std::cout <<"Estado  : [ Ascendiendo ]"<<std::endl;
        altura_alcanzada=posicion_y;
        std::cout << "Maximo Alcanzado "<<altura_alcanzada<<std::endl;
    }
    else{
        std::cout <<"Estado  :  [Descendiendo]" << std::endl;
        std::cout << "Maximo Alcanzado "<<altura_alcanzada<<std::endl;
    }
    //std::cout << "Avanzando  "<< velocidad_vertical <<" m/s  sobre el plano vertical "<< std::endl;
    std::cout << "Altura maxima Teorica -> "<< altura_maxima <<" mts" << std::endl;
}


signed int movimientoParabolico::getXposition()
{
    return posicion_x;
}

signed int movimientoParabolico::getYposition()
{
    return posicion_y;
}


signed short movimientoParabolico::getVelocidad_instantanea() const
{
    return velocidad_instantanea;
}

void movimientoParabolico::setVelocidad_instantanea(signed short value)
{
    velocidad_instantanea = value;
}
