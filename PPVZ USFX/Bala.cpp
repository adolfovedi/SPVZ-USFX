#include "Bala.h"


Bala::Bala(float _velocidad, int _da�o, float _pocisionX, float _posicionY) {
    velocidad = _velocidad;
    da�o = _da�o;
    posicionX = _pocisionX;
    posicionY = _posicionY;

}


// M�todo para mover la bala en el escenario
void Bala::moverse()
{
    // Actualizar la posici�n de la bala seg�n su velocidad
    posicionX += velocidad;

}

// Si la energ�a del zombie llega a cero o menos, el zombie muer
void Bala::atacar(Zombie& zombie)
{
    // Reducir la energ�a del zombie seg�n el da�o de la bala
    zombie.setEnergia(zombie.getEnergia() - da�o);

    // Si la energ�a del zombie llega a cero o menos, el zombie muere
    if (zombie.getEnergia() <= 0) {
        zombie.morir();
    }
    cout<<"El zombie ha sido atacado   ||\tJuanito  .....abatido siga disparando ...... :) :) :)||\n"<<endl;

}
