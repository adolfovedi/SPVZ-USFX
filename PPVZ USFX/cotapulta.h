#pragma once
#include "Planta.h"
class cotapulta : public Planta
{
  private:

    string tipoHabilidad;
    int poder;
    int resistencia;
    string mejora;
    string obtencion;


public:
    /* cotapulta(string, int, int, string, int, int, int, int, string, string, int);
     cotapulta() : Planta() {};*/

    cotapulta();

    void setTipoHabilidad(string _tipoHabilidad) { tipoHabilidad = _tipoHabilidad; }
    string getTipoHabilidad() { return tipoHabilidad; }
    ;
    void setPoder(int _poder) { poder = _poder; }
    int getPoder() { return poder; }

    void setResistencia(int _resistencia) { resistencia = _resistencia; }
    int getResistencia() { return resistencia; }

    void setMejora(string _mejora) { mejora = _mejora; }
    string getMejora() { return mejora; }

    void setOptencion(string _obtencion) { obtencion = _obtencion; }
    string getObtencion() { return obtencion; }

    void disparar();
    void mostrarInfo();
    void dibujar();
    void recuperar();


};

