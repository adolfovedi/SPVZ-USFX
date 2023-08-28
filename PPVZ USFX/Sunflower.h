#pragma once
#include "Planta.h"
class Sunflower :public Planta
{
private:
	string nombre;
	int costo;
	int solesGenerados;
	int resistencia;
	int tiempoSpawnSol;
public:
	//constructores
	Sunflower();
	//Metodos accesores
	void setnombre(string _nombre) { nombre = _nombre; }
	string getnombre() { return nombre; }
	
	void setcosto(int _costo) { costo = _costo; }
	int getcosto() { return costo; }
	
	void setsolesGenerados(int _solesGenerados) { solesGenerados = _solesGenerados; }
	int getsolesGenerados() { return solesGenerados; }
	

	//Metodos propios
	virtual void generarSol(); 
	virtual void spawnSol(); 

};

