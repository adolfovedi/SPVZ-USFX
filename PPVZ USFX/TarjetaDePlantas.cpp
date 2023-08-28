#include "TarjetaDePlantas.h"


TarjetaDePlantas::TarjetaDePlantas(int _tiempoDeRecarga, string _nombreDePlanta, float _dimension, float _posicionX, float _posicionY) {
    tiempoRecarga = _tiempoDeRecarga;
    nombrePlanta = _nombreDePlanta;
    dimension = _dimension;
    posicionX = _posicionX;
    posicionY = _posicionY;
}

void TarjetaDePlantas::lugarTarjetas(float _posicionX, float _posicionY) {
    posicionX = _posicionX;
    posicionY = _posicionY;
}

void TarjetaDePlantas::recarga() {
    if (tiempoRecarga > 0) {
        tiempoRecarga--;
    }
}
