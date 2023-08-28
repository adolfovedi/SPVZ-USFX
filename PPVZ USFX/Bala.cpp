#include "Bala.h"


Bala::Bala(float _velocidad, int _daño, float _pocisionX, float _posicionY) {
    velocidad = _velocidad;
    daño = _daño;
    posicionX = _pocisionX;
    posicionY = _posicionY;

}


// Método para mover la bala en el escenario
void Bala::moverse()
{
    // Actualizar la posición de la bala según su velocidad
    posicionX += velocidad;

}

// Si la energía del zombie llega a cero o menos, el zombie muer
void Bala::atacar(Zombie& zombie)
{
    // Reducir la energía del zombie según el daño de la bala
    zombie.setEnergia(zombie.getEnergia() - daño);

    // Si la energía del zombie llega a cero o menos, el zombie muere
    if (zombie.getEnergia() <= 0) {
        zombie.morir();
    }
    cout<<"El zombie ha sido atacado   ||\tJuanito  .....abatido siga disparando ...... :) :) :)||\n"<<endl;

}
