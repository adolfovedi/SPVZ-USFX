#pragma once
#include "Planta.h"
class TwinSunflower :public Planta
{
private:
	string nombre;
	int costo;
	int solesGenerados;
	int resistencia;
	int tiempoSpawnSol;
public:
	//constructores
	TwinSunflower();

	//Metodos accesores
	void setNombre(string _nombre) { nombre = _nombre; }
	string getNombre() { return nombre; }

	void setCosto(int _costo) { costo = _costo; }
	int getCosto() { return costo; }

	void setSolesGenerados(int _solesGenerados) { solesGenerados = _solesGenerados; }
	int getSolesGenerados() { return solesGenerados; }
	

	//Metodos propios
	void generarSol(); //{  }
	void spawnSol(); //{  }


};

