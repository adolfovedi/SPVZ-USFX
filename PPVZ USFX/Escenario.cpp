#include "Escenario.h"

Escenario::Escenario(int _energia, int _longitud, int _ancho) {
    energia = _energia;
    longitud = _longitud;
    ancho = _ancho;
}

void Escenario::reducirEnergia(int cantidad) {
    energia -= cantidad;
}

bool Escenario::verificarVictoria() {
    return energia == 0;
}

bool Escenario::verificarDerrota() {
    return energia <= 0;
}

void Escenario::agregarZombie(Zombie* zombie) {
    zombiesEnEscenario.push_back(zombie);
}

void Escenario::eliminarZombie(Zombie* zombie) {
    for (auto it = zombiesEnEscenario.begin(); it != zombiesEnEscenario.end(); ++it) {
        if (*it == zombie) {
            zombiesEnEscenario.erase(it);
            break;
        }
    }
}

void Escenario::agregarPlanta(Planta* planta) {
    plantasEnEscenario.push_back(planta);
}

void Escenario::eliminarPlanta(Planta* planta) {
    for (auto it = plantasEnEscenario.begin(); it != plantasEnEscenario.end(); ++it) {
        if (*it == planta) {
            plantasEnEscenario.erase(it);
            break;
        }
    }
}

void Escenario::actualizar() {
    // Lógica para actualizar el escenario en cada ciclo del juego
    // Por ejemplo, mover zombies, verificar colisiones, etc.
    for (auto zombie : zombiesEnEscenario) {
        // Lógica para mover zombies
    }

    for (auto planta : plantasEnEscenario) {
        // Lógica para hacer que las plantas ataquen o realicen acciones
    }
}
