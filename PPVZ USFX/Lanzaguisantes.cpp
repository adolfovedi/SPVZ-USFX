#include "Lanzaguisantes.h"



//Lanzaguisantes::Lanzaguisantes(int _posicionX, int _posicionY, string _nombre, string _color, int _salud, int _costo, int _dano, int _alcance, int _danoInfligido, int _tiempoDeRecarga,
//	bool _prodDeSol, bool _especial, bool _desbloNivel, int _resistenciaPlanta,
//	int _velocidadDeAtaque, int _produccionDeSoles, int _contadorDeAtaque,
//	int _contadorDeRecarga)
//	: Planta(_posicionX, _posicionY, _nombre, _color, _salud,_costo,_dano,_alcance,_danoInfligido,_tiempoDeRecarga){
//	ProdDeSol = _prodDeSol;
//	Especial = _especial;
//	desbloNivel = _desbloNivel;
//	resistenciaPlanta = _resistenciaPlanta;
//	velocidadDeAtaque = _velocidadDeAtaque;
//	produccionDeSoles = _produccionDeSoles;
//	contadorDeAtaque = _contadorDeAtaque;
//	contadorDeRecarga = _contadorDeRecarga;
//
//
//};

Lanzaguisantes::Lanzaguisantes()
{
	ProdDeSol = true;
	 ProdDeSol=false;
	 Especial=true;
	 desbloNivel=01;
	 resistenciaPlanta=23;
	 velocidadDeAtaque=9;
	 produccionDeSoles=34;
	 contadorDeAtaque=78;
	 contadorDeRecarga=60;
	
}

void Lanzaguisantes::atacar(Zombie*) {
	cout << "Lanzaguisantes dispara un proyectil" << endl;
}
void Lanzaguisantes::recogerSol() {
	cout << "Lanzaguisantes no puede recoger sol" << endl;
}

void Lanzaguisantes::colocar() {
	int numeroAleatorio = rand() % 100 + 1;
	int x = numeroAleatorio;
	int numeroAleatorio2 = rand() % 100 + 1;
	int y = numeroAleatorio2;
	if (x >= 50 && y >= 50) {
		posicionX = x;
		posicionY = y;

		cout << "Se ha colocado un Lanzaguisantes en la posicion (" << x << ", " << y << ")." << endl;
	}
	else {
		cout << "Posicion invalida. No se pudo colocar el Lanzaguisantes." << endl;
	}
}


void Lanzaguisantes::verificarRecarga()
{
	if (contadorDeRecarga <= 0) {
		cout << "Lanzaguisantes recargado y listo para disparar." << endl;
	}
	else {
		cout << "Lanzaguisantes en recarga. Faltan " << contadorDeRecarga << " turnos para disparar." << endl;
	}
}

void Lanzaguisantes::recibirDano()
{
	Planta::recibirDano();
}

//void Lanzaguisantes::actualizar()
//{
//	
//	//if (contadorDeRecarga > 0) {
//	//	contadorDeRecarga--;
//	//}
//	//cout<<"   se actualizo nuestro tiempo de recarga     "<<contadorDeRecarga<<endl;
//	//cout<<"   se actualizo nuestro tiempo de recarga     "<<endl;
//}

void Lanzaguisantes::Disparar()
{
	if (contadorDeRecarga <= 0) {
		cout << "Lanzaguisantes dispara un proyectil hacia un zombie." << endl;
		contadorDeRecarga = velocidadDeAtaque; // Reiniciar el contador de recarga
	}
	else {
		cout << "Lanzaguisantes no puede disparar. Debe esperar " << contadorDeRecarga << " turnos para recargarse." << endl;
	}
}

void Lanzaguisantes::tiempoDisparo()
{
	
	if (contadorDeRecarga <= 0) {
		// El contador de recarga ha llegado a cero, el Lanzaguisantes está listo para disparar
		Disparar();
		contadorDeRecarga = tiempoDeRecarga; // Reiniciar el contador de recarga
	}
	else {
		cout << "El Lanzaguisantes no esta listo para disparar. Tiempo restante de recarga: " << contadorDeRecarga << " turnos." << endl;
		contadorDeRecarga--; // Reducir el contador de recarga en cada turno
	}

}



