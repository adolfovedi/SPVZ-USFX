#include "Cercado.h"

Cercado::Cercado() {
    da�o = 5;
    resistencia = 80;
    posicionX = 500.0f;
    posicionY = 200.0f;
    tipoCerca = "Cerca mas fuerte";
}

Cercado::Cercado(int _da�o, int _resistencia, float _posicionX, float _posicionY, string _tipoCerca) {
    da�o = _da�o;
    resistencia = _resistencia;
    posicionX = _posicionX;
    posicionY = _posicionY;
    tipoCerca = _tipoCerca;
}

void Cercado::lugarCerca() {
    posicionX += resistencia;
    posicionY += resistencia;
}

void Cercado::recibirDa�o(int _da�o) {
    resistencia -= _da�o;
}

bool Cercado::estaDerribado() {
    return resistencia <= 0;
}
