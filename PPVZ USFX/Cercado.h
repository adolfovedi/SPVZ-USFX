# pragma once
# include <iostream>
using namespace std;


class Cercado {
private:
    int daño;
    int resistencia;
    float posicionX;
    float posicionY;
    string tipoCerca;

public:
    Cercado();
    Cercado(int _daño, int _resistencia, float _posicionX, float _posicionY, string _tipoCerca);

    void setDaño(int _daño) { daño = _daño; }
    int getDaño() { return daño; }

    void setResistencia(int _resistencia) { resistencia = _resistencia; }
    int getResistencia() { return resistencia; }

    void setPosicionX(float _posicionX) { posicionX = _posicionX; }
    float getPosicionX() { return posicionX; }

    void setPosicionY(float _posicionY) { posicionY = _posicionY; }
    float getPosicionY() { return posicionY; }

    void setTipoCerca(string _tipoCerca) { tipoCerca = _tipoCerca; }
    string getTipoCerca() { return tipoCerca; }

    void lugarCerca();
    void recibirDaño(int);
    bool estaDerribado();

};