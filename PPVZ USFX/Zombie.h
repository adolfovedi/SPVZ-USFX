#pragma once

#include <iostream>

using namespace std;



class Zombie
{
private:

	int energia=90;
	int nivelFuria;
	int velocidad;
	float posicionX;
	float posicionY;
	string tipoZombie;
	string nombre;

public:
	//constructor
	Zombie();//  vacio
	Zombie(string _nombre); // con un parametro
	Zombie(string _nombre, int _energia, int _nivelFuria, int _velocidad, float _posicionX, float _posicionY, string _tipoZombie); // con todos los parametros


	// Metodos accesores

	void setEnergia(int _energia) { energia = _energia; }
	int getEnergia() { return energia; }

	void setNivelFuria(int _nivelFuria) { nivelFuria = _nivelFuria; }
	int getNivelFuria() { return nivelFuria; }

	void setVelocidad(int _velocidad) { velocidad = _velocidad; }
	int getVelocidad() { return velocidad; }

	void setPosicionX(float _posicionX) { posicionX = _posicionX; }
	float getPosicionX() { return posicionX; }

	void setPocisionY(float _posicionY) { posicionY = _posicionY; }
	float getPosicionY() { return posicionY; }

	void setTipoZombie(string tipoZombie) { tipoZombie = tipoZombie; }
	string getTipoZombie() { return tipoZombie; }

	void setNombre(string _nombre) { nombre = _nombre; }
	string getNombre() { return nombre; }


	

	//Metodos comunes
	//es recomendable poner solo tipo sin nombres  en este caso float int 

	void moverse();
	//void moverse(float , float );
	//void moverse(float , float,int );
	void recibirDano();
	void danoInfligido();
	void atacar();
	void morir();

};


