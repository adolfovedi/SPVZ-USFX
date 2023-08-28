#pragma once
#include <iostream>
#include <string>
using namespace std;

class TarjetaDePlantas {
private:
    int tiempoRecarga = 10;
    string nombrePlanta;
    float dimension;
    float posicionX;
    float posicionY;

public:
    TarjetaDePlantas(int _tiempoDeRecarga, string _nombreDePlanta, float _dimension, float _posicionX, float _posicionY);

    void setTiempoDeRecarga(int _tiempoDeRecarga) { tiempoRecarga = _tiempoDeRecarga; }
    int getTiempoDeRecarga() { return tiempoRecarga; }

    void setNombreDePlanta(string _nombreDePlanta) { nombrePlanta = _nombreDePlanta; }
    string getNombreDePlanta() { return nombrePlanta; }

    void setDimension(float _dimension) { dimension = _dimension; }
    float getDimension() { return dimension; }

    void setPosicionX(float _posicionX) { posicionX = _posicionX; }
    float getPosicionX() { return posicionX; }

    void setPosicionY(float _posicionY) { posicionY = _posicionY; }
    float getPosicionY() { return posicionY; }

    void lugarTarjetas(float _posicionX, float _posicionY);
    void recarga();
};