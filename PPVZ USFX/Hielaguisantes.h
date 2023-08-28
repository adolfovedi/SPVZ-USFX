#pragma once
#include "Lanzaguisantes.h"
class Hielaguisantes :public Lanzaguisantes
{
private:

	bool congela;
	string tipoGuisantes;
public:

	Hielaguisantes();
	//Hielaguisantes(string, string, int, int, int, int,bool,string);

	void setCongela(bool _congela) { congela = _congela; }bool getCongela() { return congela; }
	void setTipoGuisantes(string _tipoGuisantes) { tipoGuisantes = _tipoGuisantes; }string getTipoGuisantes() { return tipoGuisantes; }


	void congelar(Zombie* objetivo); // Método específico de Hielaguisantes
	//void actualizar() override; // Sobrescribir el método actualizar de Lanzaguisantes
	 void Disparar() override; // Sobrescribir el método Disparar de Lanzaguisantes

};

