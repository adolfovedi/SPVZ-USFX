#pragma once
#include"Zombie.h"
#include<iostream>
using namespace std;



class Bala
{
private:
    float velocidad;
    int da�o;
   float posicionX;
    float posicionY;

public:
    Bala(float, int, float ,float );

    // M�todos accesores
    void setVelocidad(float _velocidad) { velocidad = _velocidad; }
    float getVelocidad() { return velocidad; }

    void setDa�o(int _da�o) { da�o = _da�o; }
    int getDa�o() { return da�o; }

    void setPosicionX(float _posicionX) { posicionX = _posicionX; }
    float getPosicionX() { return posicionX; }

    void setPosicionY(float _posicionY) { posicionY = _posicionY; }
    float getPosicionY() { return posicionY; }

    // M�todos para movimiento y ataque
    void moverse();
    void atacar(Zombie& zombie); // Pasar una referencia al zombie objetivo

};

