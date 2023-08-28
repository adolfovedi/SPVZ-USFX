#pragma once
#include "Hielaguisantes.h"

class Tripitidora :public Hielaguisantes
{
private:
	string tipoTripitidora;

public:
	Tripitidora();
	//Tripitidora(string, string, int, int, int, int, bool, string, string);

	void setTipoTripitidora(string _tipoTripitidora) { tipoTripitidora = _tipoTripitidora; }string getTipoTripitidora() { return tipoTripitidora; }

	//void tripitir(Zombie* objetivo); // Método específico de Tripitidora
	//void actualizar() override; // Sobrescribir el método actualizar de Hielaguisantes
	void Disparar() override; // Sobrescribir el método Disparar de Hielaguisantes

	void dosDisparosAlVez(Zombie* objetivo);


};

