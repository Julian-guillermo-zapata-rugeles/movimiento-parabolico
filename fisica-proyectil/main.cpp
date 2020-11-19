/*

Julián Guillermo Zapata Rugeles
2020

Calcular el lanzamiento de un proyectil dado la velocidad inicial y un angulo alfa


*/

#include <iostream>
#include <math.h>
#include "movimientoparabolico.h"
#include <cstdlib>
using namespace std;

int main()
{
    int angulo;
    int velocidad;
    cout <<"Ingrese el angulo de lanzamiento :" ;
    std::cin >> angulo ;
    cout <<"Ingrese velocidad del proyectil (instantanea ) m/s :";
    std::cin >> velocidad;
    movimientoParabolico  proyectil(angulo,velocidad);
    while (true) {
        cout << "PROYECTIL EN TRAYECTORIA"<<std::endl;
        proyectil.imprimir_coordenadas();
        proyectil.setMovimiento(0.1);
        if(proyectil.getYposition()<0){
            std::cout << "#### EL PROYECTIL SE DETUVO #### " << std::endl;
            break
;
        }
        system("sleep 0.1");
        system("clear");
    }
    return 0;
}
