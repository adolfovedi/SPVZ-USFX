#pragma once
#include "Zombie.h"
class ZombieAbanderado :public Zombie
{

private:

	int VelocidadAbanderado = 35;
	int NiveldeAlerta;
	int CostoCerebro;

public:



	int getVelocidadAbanderado() const;

	void setNiveldeAlerta(int _niveldeAlerta) { NiveldeAlerta = _niveldeAlerta; }
	int getNiveldeAlerta() { return NiveldeAlerta; }

	void setCostoCerebro(int _costoCerebro) { CostoCerebro = _costoCerebro; }
	int getCostoCerebro() { return CostoCerebro; }


	void HordadeZobies();
};

