#pragma once
#include <iostream>
using namespace std;
#include<string>


class Tarjeta_de_plantas
{
private:
	int Tiempo_de_recarga;
	string Nombre_de_planta;
	float Dimension;
	float PosicionX;
	float PosicionY;
public:
	Tarjeta_de_plantas();
	Tarjeta_de_plantas(int, string Nombre_de_planta, float Dimension, float PosicionX, int PosicionY);

	void setTiempo_de_recarga(int _Tiempo_de_carga) { Tiempo_de_recarga = _Tiempo_de_carga; }
	int getTiempo_de_carga() { return Tiempo_de_recarga; }

	void setNombre_de_planta(int _Nombre_de_planta) { Nombre_de_planta = _Nombre_de_planta; }
	string getNombre_de_planta() { return Nombre_de_planta; }

	void setDimension(int _Dimension) { Dimension = _Dimension; }
	float getDimension() { return Dimension; }

	void setPosicionX(int _PosicionX) { PosicionX = _PosicionX; }
	float getPosicionX() { return PosicionX; }

	void setPosicionY(int _PosicionY) { PosicionY = _PosicionY; }
	float getPosicionY() { return PosicionY; }


~Tarjeta_de_plantas();
void lugar_tarjetas(float, float);
void Recarga(int);

};




