
#pragma once
#include"Zombie.h"
#include"Entidad.h"
#include <iostream>
#include <string>
using namespace std;

class Planta : public Entidad
{
private:
   // Atributos
    std::string nombre;
    std::string color;
    int Salud;
    int costo;
    int dano;
    int alcance;
    int danoInfligido;
protected:
    int tiempoDeRecarga;

public:
   // Constructor
    Planta(); // vacio
   Planta(int , int,std::string ,std::string,int,int,int,int,int,int); // con un parametro
   

    //Metodos Set y Get tambien llamados accesores y mutadores
    void setNombre(std::string _nombre) { nombre = _nombre; }std::string getNombre() { return nombre; }
    void setColor(std::string _color) { color = color; }std::string getColor() { return color; }
    void setSalud(int _Salud) { Salud = _Salud; }int getSalud() { return Salud; }
    void setCosto(int _costo) { costo = _costo; }int getCosto() { return costo; }
    void setTiempoDeRecarga(int _tiempoDeRecarga) { tiempoDeRecarga = _tiempoDeRecarga; }int getTiempoDeRecarga() { return tiempoDeRecarga; }
    void setDano(int _dano) { dano = _dano; }int getDano() { return dano; }
    void setAlcance(int _alcance) { alcance = _alcance; }int getAlcance() { return alcance; }
    

    //Metodos
    void mover() override;
    void colision(Entidad* ) override;
    virtual void colocar();
   virtual  void atacar(Zombie*);
   virtual void recogerSol();
   virtual void verificarRecarga();
   virtual void recibirDano();
   virtual void actualizar();

   

};
