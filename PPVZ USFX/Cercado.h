# pragma once
# include <iostream>
using namespace std;


class Cercado {
private:
    int da�o;
    int resistencia;
    float posicionX;
    float posicionY;
    string tipoCerca;

public:
    Cercado();
    Cercado(int _da�o, int _resistencia, float _posicionX, float _posicionY, string _tipoCerca);

    void setDa�o(int _da�o) { da�o = _da�o; }
    int getDa�o() { return da�o; }

    void setResistencia(int _resistencia) { resistencia = _resistencia; }
    int getResistencia() { return resistencia; }

    void setPosicionX(float _posicionX) { posicionX = _posicionX; }
    float getPosicionX() { return posicionX; }

    void setPosicionY(float _posicionY) { posicionY = _posicionY; }
    float getPosicionY() { return posicionY; }

    void setTipoCerca(string _tipoCerca) { tipoCerca = _tipoCerca; }
    string getTipoCerca() { return tipoCerca; }

    void lugarCerca();
    void recibirDa�o(int);
    bool estaDerribado();

};