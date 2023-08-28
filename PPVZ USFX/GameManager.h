#pragma once
#include<iostream>
using namespace std;

class GameManager
{
private:

	int oleadaActual;
	float puntuacionJugador;
	int monedaJugador;
	bool  finDelJuego;


public:
    void setOleadaActual(int _oleadaActual) {   oleadaActual = _oleadaActual;}

    int getOleadaActual() { return oleadaActual; }
    
    void setPuntuacionJugador(float _puntuacionJugador) { puntuacionJugador = _puntuacionJugador; }
    float getPuntuacionJugador() { return puntuacionJugador; }

    void setmonedaJugador(int _monedaJugador) { monedaJugador = _monedaJugador; }
     int getmonedaJugador() { return monedaJugador; }

    void setFinDelJuego(bool _finDelJuego) { finDelJuego = _finDelJuego; }
	bool getFinDelJuego() { return finDelJuego; }

    //constructor 

   // GameManager(int, float, int, bool);
    GameManager();

    // Métodos de la clase GameManager
    void IniciarJuego();
    virtual void Actualizar();

    void aumentarOleadaActual();
    void aumentarPuntuacionJugador(float); //Aumenta la puntuacion del jugador
    void aumentarMonedaJugador(int );//Aumenta la moneda del jugador
    void disminuirMonedaJugador(int);
    void reiniciarGameManager();
    bool verificarVictoria();
    bool verificarDerrota();





    
};


