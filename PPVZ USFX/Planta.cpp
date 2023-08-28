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
    // Las plantas no pueden moverse, ya que son colocadas en una posición fija
    cout << "Las plantas no pueden moverse." << endl;
}

void Planta::colision(Entidad* otraEntidad) {
    if (otraEntidad) {
        // Obtener la posición de la otra entidad
        int otraX = otraEntidad->getPosicionX();
        int otraY = otraEntidad->getPosicionY();
        int posicionX=10;
       int  posicionY=45;
        // Verificar si la otra entidad está en la misma posición que la planta
        if (posicionX == otraX && posicionY == otraY) {
            cout << "Colisión entre la planta " << nombre << " y otra entidad en la posición (" << posicionX << ", " << posicionY << ")." << endl;
            // Aquí puedes realizar acciones específicas en caso de colisión
        }
        else {
            cout << "No hay colisión entre la planta " << nombre << " y otra entidad." << endl;
        }
    }
    else {
        cout << "No hay colisión ya que la otra entidad es nula." << endl;
    }
}

void Planta::colocar()
{
    posicionX = 4;
	posicionY = 6;
	cout << "La planta " << nombre << " ha sido colocada en la posición (" << posicionX << ", " << posicionY << ")." << endl;
}

void Planta::atacar(Zombie* objetivo)
{
    if (objetivo) {
        int danoInfligido = this->dano; // Obtener el daño de la planta
        objetivo->recibirDano(); // Hacer que el zombie reciba el daño

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
    int danoRecibido = 10; // Por ejemplo, asumamos que siempre se recibe 10 puntos de daño

    Salud -= danoRecibido; // Reducir la salud de la planta en función del daño recibido

    if (Salud <= 0) {
        cout << "La planta " << nombre << " ha sido destruida." << endl;
    }
    else {
        cout << "La planta:   " << nombre << " ha recibido dano  " << danoRecibido <<"     Juanito se lo esta comiendo ____ :(" << endl;
    }
}






void Planta::actualizar() {
   

}



