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

	//void tripitir(Zombie* objetivo); // M�todo espec�fico de Tripitidora
	//void actualizar() override; // Sobrescribir el m�todo actualizar de Hielaguisantes
	void Disparar() override; // Sobrescribir el m�todo Disparar de Hielaguisantes

	void dosDisparosAlVez(Zombie* objetivo);


};

