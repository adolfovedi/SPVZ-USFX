#include "Hielaguisantes.h"

//Hielaguisantes::Hielaguisantes()
//{
//	congela = false;
//	tipoGuisantes = "Hielo";
//}
//
//Hielaguisantes::Hielaguisantes(string _nombre, string _color, int _pocisionX, int _pocisionY, int _costo, int _velocidadDeAtaque, bool _congela, string _tipoGuisantes)
//	:Lanzaguisantes(_nombre, _color, _pocisionX, _pocisionY, _costo, _velocidadDeAtaque)
//{
//	congela = _congela;
//	tipoGuisantes = _tipoGuisantes;
//}


//Hielaguisantes::Hielaguisantes()
//{
//
//}

Hielaguisantes::Hielaguisantes()
{
	congela = false;
	tipoGuisantes = "Hielo";


}

void Hielaguisantes::congelar(Zombie* objetivo)
{
	if (objetivo) {
		congela = true;
		cout << "El zombie ha sido congelado." << endl;
	}
	else {
		cout << "No hay zombies en el alcance de la planta." << endl;
	}
}
//
//void Hielaguisantes::actualizar()
//
//{
//		//Lanzaguisantes::actualizar();
//	//if (congela) {
//	//	cout << "El zombie se ha congelado." << endl;
//	//}
//	//else {
//	//	cout << "El zombie no se ha congelado." << endl;
//	//}
//}

void Hielaguisantes::Disparar()
{
	cout << "El hielaguisante ha disparado un proyectil de hielo." << endl;
}

