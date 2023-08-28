#include "ZombieAbanderado.h"


int ZombieAbanderado::getVelocidadAbanderado() const
{
    return VelocidadAbanderado;
}



void ZombieAbanderado::HordadeZobies()
{
    NiveldeAlerta += 1;
    if (NiveldeAlerta <= 0) {
		HordadeZobies();
	}
    cout<<"Nivel de Alerta: "<<NiveldeAlerta<<endl;
}