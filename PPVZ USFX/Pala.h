#pragma once
#include <iostream>
using namespace std;


class Pala
{
private:

	int resistencia;

public:
	Pala(); // Constructor

	bool usar(); // Método para usar la pala
	int getResistencia(); // Método para obtener la resistencia actual
};
