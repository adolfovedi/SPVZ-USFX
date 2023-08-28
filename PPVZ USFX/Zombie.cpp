#include "Zombie.h"

Zombie::Zombie()
{
	//energia=100;
	nivelFuria = 20;
	velocidad = 1;
	posicionX=6.70f;
	posicionY=6.700f;
	tipoZombie = "Zombie normal";
	nombre = "Zombie anonymu";
}

Zombie::Zombie(string _nombre)
{
	
	//energia = 100;
	nivelFuria = 20;
	velocidad = 1;
	posicionX = 6.70f;
	posicionY = 6.700f;
	tipoZombie = "Zombie normal";
	nombre = _nombre;
}

Zombie::Zombie(string _nombre, int _energia, int _nivelFuria, int _velocidad, float _posicionX, float _posicionY, string _tipoZombie)
{
	nombre = _nombre;
	energia = _energia;
	nivelFuria = _nivelFuria;
	velocidad = _velocidad;
	posicionX = _posicionX;
	posicionY = _posicionY;
	tipoZombie = _tipoZombie;
}

void Zombie::moverse()
{
	posicionX += velocidad;
	posicionY += velocidad;

}

//void Zombie::moverse(float _posicionSiquienteX, float _posicionSiguienteY)
//{
//}
//
//void Zombie::moverse(float posicionFinalX, float posicionFinalY, int velocidad)
//{
//
//}

void Zombie::recibirDano()
{
		energia -= 10;
}

void Zombie::danoInfligido()
{
		energia -= 10;

}

void Zombie::atacar()
{
}

void Zombie::morir()
{
}
