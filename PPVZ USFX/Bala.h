#pragma once
#include"Zombie.h"
#include<iostream>
using namespace std;



class Bala
{
private:
    float velocidad;
    int daño;
   float posicionX;
    float posicionY;

public:
    Bala(float, int, float ,float );

    // Métodos accesores
    void setVelocidad(float _velocidad) { velocidad = _velocidad; }
    float getVelocidad() { return velocidad; }

    void setDaño(int _daño) { daño = _daño; }
    int getDaño() { return daño; }

    void setPosicionX(float _posicionX) { posicionX = _posicionX; }
    float getPosicionX() { return posicionX; }

    void setPosicionY(float _posicionY) { posicionY = _posicionY; }
    float getPosicionY() { return posicionY; }

    // Métodos para movimiento y ataque
    void moverse();
    void atacar(Zombie& zombie); // Pasar una referencia al zombie objetivo

};

