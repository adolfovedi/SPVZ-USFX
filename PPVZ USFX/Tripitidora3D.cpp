#include "Tripitidora3D.h"

Tripitidora3D::Tripitidora3D()
{
	tresDisparos = "Tripitidora 3Disparos";
}

void Tripitidora3D::tresDisparosAlVez(Zombie* objetivo)
{
	if (objetivo) {
		cout << "La tripitidora 3D ha disparado tres Guisantes a diferentes direcciones." << endl;
	}
	else {
		cout << "No hay zombies en el alcance de la planta." << endl;
	}
}
