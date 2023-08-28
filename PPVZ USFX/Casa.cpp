#include "Casa.h"
#include<iostream>
using namespace std;

Casa::Casa()
{
	barreraEliminada = "las plantas fueron derribadas";
	zombisDentro = "juanito murio";
	tipoCasa = "pequeño";
}


Casa::Casa(string _tipoCasa)
{
	barreraEliminada = "las plantas fueron derribadas";
	zombisDentro = "juanito murio";
	tipoCasa = _tipoCasa;
}


Casa::Casa(string _barreraEliminada, string _zombisDentro, string _tipoCasa)
{
	barreraEliminada = _barreraEliminada;
	zombisDentro = _barreraEliminada;
	tipoCasa = _tipoCasa;
}


bool Casa::barreraEstaEliminada(string barreraEliminada)
{
	if (barreraEliminada == "si") {
		return  true;
	}
	else {
		return  false;
	}
	//this-> barreraEliminada == "si";
}


bool Casa::hayZombisDentro(string zombiaDentro) {

	if (zombisDentro == "si") {
		this->zombisDentro = true; // Hay zombies dentro de la casa
	}
	else {
		return false; // No hay zombies dentro de la casa
	}
	//this-> zombisDentro == "si";
}



void Casa::eliminarBarrera(string zombisDentro)
{
	if (zombisDentro == "si") {
		this->zombisDentro = true;
	}
	else {
		this->zombisDentro;
	}
	//this->zombisDentro = zombisDentro == "si";
}


void Casa::zombisEntraron()
{
	zombisDentro = true;
}