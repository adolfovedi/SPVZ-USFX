#include "Tripitidora.h"

Tripitidora::Tripitidora()
{	

	tipoTripitidora = "Tripitidora normal";
}

//void Tripitidora::actualizar()
//{
//	Hielaguisantes::actualizar();
//}

void Tripitidora::Disparar()
{
	Hielaguisantes::Disparar();
}

void Tripitidora::dosDisparosAlVez(Zombie* objetivo)
{
	if (objetivo) {
		cout << "La tripitidora ha disparado dos proyectiles de hielo." << endl;
	}
	else {
		cout << "No hay zombies en el alcance de la planta." << endl;
	}
}
