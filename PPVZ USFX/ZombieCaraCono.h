#pragma once
#include "Zombie.h"
class ZombieCaraCono :public Zombie
{
private:

    int velocidad = 30;
    int DurezaCono = 100;

public:

    ZombieCaraCono() {};
    //metodos accesores

    void setVelocidad(int _Velocidad) { velocidad = _Velocidad; }
    int getVelocidad() { return velocidad; }
  

    void setDurezaCono(int _DurezaCono) { DurezaCono = _DurezaCono; }
    int getDurezaCono() { return DurezaCono; }

    void niveldeFuria();



};

