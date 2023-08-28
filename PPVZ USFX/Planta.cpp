#include "Planta.h"


//Planta::Planta(int _posicionX, int _posicionY, string _nombre, string _color, int _salud,int _costo, int _dano, int _alcance,int _danoInfligido, int _tiempoDeRecarga) : Entidad(_posicionX, _posicionY)
//{
//	nombre = _nombre;
//	color = _color;
//	Salud = _salud;
//	costo = _costo;
//	dano = _dano;
//	alcance = _alcance;
//	danoInfligido = _danoInfligido;
//	tiempoDeRecarga = _tiempoDeRecarga;
//}

Planta::Planta()
{
    nombre = "Planta";
	color = "Verde";
	Salud = 100;
	costo = 50;
	dano = 10;
	alcance = 5;
	danoInfligido = 0;
	tiempoDeRecarga = 5;



}

Planta::Planta(int _posicionX, int _posicionY,string _nombre, string _color , int _Salud, int _costo , int _dano, int _alcance,  int _danoInfligido, int _tiempoDeRecarga)
{
    posicionX = _posicionX;
    posicionY = _posicionY;
    nombre = _nombre;
    color = _color;
    Salud = _Salud;
    costo = _costo;
    dano = _dano;
    alcance = _alcance;
    danoInfligido = _danoInfligido;
    tiempoDeRecarga = _tiempoDeRecarga;


}

void Planta::mover() {
    // Las plantas no pueden moverse, ya que son colocadas en una posici�n fija
    cout << "Las plantas no pueden moverse." << endl;
}

void Planta::colision(Entidad* otraEntidad) {
    if (otraEntidad) {
        // Obtener la posici�n de la otra entidad
        int otraX = otraEntidad->getPosicionX();
        int otraY = otraEntidad->getPosicionY();
        int posicionX=10;
       int  posicionY=45;
        // Verificar si la otra entidad est� en la misma posici�n que la planta
        if (posicionX == otraX && posicionY == otraY) {
            cout << "Colisi�n entre la planta " << nombre << " y otra entidad en la posici�n (" << posicionX << ", " << posicionY << ")." << endl;
            // Aqu� puedes realizar acciones espec�ficas en caso de colisi�n
        }
        else {
            cout << "No hay colisi�n entre la planta " << nombre << " y otra entidad." << endl;
        }
    }
    else {
        cout << "No hay colisi�n ya que la otra entidad es nula." << endl;
    }
}

void Planta::colocar()
{
    posicionX = 4;
	posicionY = 6;
	cout << "La planta " << nombre << " ha sido colocada en la posici�n (" << posicionX << ", " << posicionY << ")." << endl;
}

void Planta::atacar(Zombie* objetivo)
{
    if (objetivo) {
        int danoInfligido = this->dano; // Obtener el da�o de la planta
        objetivo->recibirDano(); // Hacer que el zombie reciba el da�o

        cout << "La planta " << nombre << " ha atacado al zombie." << endl;
    }
    else {
        cout << "No hay zombies en el alcance de la planta." << endl;
    }
}

void Planta::recogerSol() {

}


void Planta::verificarRecarga() {
    

}

void Planta::recibirDano() {
    int danoRecibido = 10; // Por ejemplo, asumamos que siempre se recibe 10 puntos de da�o

    Salud -= danoRecibido; // Reducir la salud de la planta en funci�n del da�o recibido

    if (Salud <= 0) {
        cout << "La planta " << nombre << " ha sido destruida." << endl;
    }
    else {
        cout << "La planta:   " << nombre << " ha recibido dano  " << danoRecibido <<"     Juanito se lo esta comiendo ____ :(" << endl;
    }
}






void Planta::actualizar() {
   

}



