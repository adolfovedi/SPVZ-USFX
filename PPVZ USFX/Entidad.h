#pragma once
#include <iostream>
#include <string>
using namespace std;


class Entidad {
protected:
    int posicionX;
    int posicionY;

public:
  //  Entidad(int _posicionX, int _posicionY) {
		//posicionX = _posicionX;
		//posicionY = _posicionY;
  //  };
    Entidad() {
    	posicionX = 0;
		posicionY = 0;
    };

    void setPosicionX(int _posicionX) { posicionX = _posicionX; }
    int getPosicionX() { return posicionX; }
     
    void setPosicionY(int _posicionY) { posicionY = _posicionY; }
    int getPosicionY() { return posicionY; }

    virtual void mover()=0;
    virtual void colision(Entidad* otraEntidad) = 0;
};

