#pragma once
#include "Tripitidora.h"
class Tripitidora3D :public Tripitidora
{
private:
	string tresDisparos;
public:
	Tripitidora3D();

	void setTresDisparos(string _tresDisparos) { tresDisparos = _tresDisparos; }string getTresDisparos() { return tresDisparos; }

	void tresDisparosAlVez(Zombie* objetivo);

};

