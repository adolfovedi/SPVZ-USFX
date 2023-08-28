#pragma once
#include"Planta.h"
#include"Zombie.h"
#include<iostream>
#include<vector>

using namespace std;
class Escenario {
private:
    int energia;
    int longitud;
    int ancho;
    vector<Zombie*> zombiesEnEscenario;
    vector<Planta*> plantasEnEscenario;

public:
    Escenario(int _energia, int _longitud, int _ancho);

    void reducirEnergia(int cantidad);

    bool verificarVictoria();

    bool verificarDerrota();

    void agregarZombie(Zombie* zombie);

    void eliminarZombie(Zombie* zombie);

    void agregarPlanta(Planta* planta);

    void eliminarPlanta(Planta* planta);

    void actualizar();
};








