#pragma once
#include <iostream>
using namespace std;


class Pala
{
private:

	int resistencia;

public:
	Pala(); // Constructor

	bool usar(); // M�todo para usar la pala
	int getResistencia(); // M�todo para obtener la resistencia actual
};
