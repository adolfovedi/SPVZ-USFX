#pragma once
#include "Planta.h"
#include<iostream>
using namespace std;

class Marigold : public Planta
{
	string nombre;
	int costo;
	int monedasGeneradas;
	int resistencia;
	int tiempoSpawnMonedas;
public:

	//constructores
	Marigold();

	//Metodos accesores
	void setNombre(string _nombre) { nombre = _nombre; }
	string getNombre() { return nombre; }

	void setCosto(int _costo) { costo = _costo; }
	int getCosto() { return costo; }

	void setmonedasGeneradas(int _monedasGeneradas) { monedasGeneradas = _monedasGeneradas; }
	int getmonedasGeneradas() { return monedasGeneradas; }
	

	//Metodos propios
	void generarMoneda();// { cout << "La margarita ha generado " << monedasGeneradas << " Monedas." << endl; }
	void spawnMoneda();// { cout << "Tiempo para generar otra moneda " << tiempoSpawnMonedas << "segundos." << endl; }





};

