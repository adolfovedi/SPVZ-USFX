#include "Cercado.h"

Cercado::Cercado() {
    daño = 5;
    resistencia = 80;
    posicionX = 500.0f;
    posicionY = 200.0f;
    tipoCerca = "Cerca mas fuerte";
}

Cercado::Cercado(int _daño, int _resistencia, float _posicionX, float _posicionY, string _tipoCerca) {
    daño = _daño;
    resistencia = _resistencia;
    posicionX = _posicionX;
    posicionY = _posicionY;
    tipoCerca = _tipoCerca;
}

void Cercado::lugarCerca() {
    posicionX += resistencia;
    posicionY += resistencia;
}

void Cercado::recibirDaño(int _daño) {
    resistencia -= _daño;
}

bool Cercado::estaDerribado() {
    return resistencia <= 0;
}
