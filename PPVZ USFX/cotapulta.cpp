#include "cotapulta.h"


cotapulta::cotapulta() {
    //nombre = "coltapulta";
    posicionX = 70;
    posicionY = 25;
    tipoHabilidad = "lanza coles con una cadencia larga";
    tiempoDeRecarga = 10;
    //costo = 100;
    resistencia = 200;
    //alcance = 0;
    mejora = "No tiene";
    obtencion = "Nivel 4-10";
    poder = 3 * 24;
}


void cotapulta::disparar()
{
    if (tiempoDeRecarga <= 0) {
        // Lógica para disparar coles
        cout << "¡Coltapulta dispara una cole!" << endl;

        // Reiniciar tiempo de recarga
        tiempoDeRecarga = 10;
    }
    else {
        cout << "Coltapulta aun se esta recargando." << endl;
    }
}
void cotapulta::mostrarInfo()
{
   // cout << "Nombre: " << nombre << endl;
    cout << "Posicion: (" << posicionX << ", " << posicionY << ")" << endl;
    cout << "Tipo de Habilidad: " << tipoHabilidad << std::endl;
    cout << "Tiempo de Recarga: " << tiempoDeRecarga << " segundos" << endl;
    //cout << "Costo: " << costo << endl;
    cout << "Resistencia: " << resistencia << endl;
   // cout << "Alcance: " << alcance << endl;
    cout << "Mejora: " << mejora << endl;
    cout << "Obtencion: " << obtencion << endl;
    cout << "Poder: " << poder << endl;
}
void cotapulta::dibujar() {
    cout << "Dibujando LanzaMaiz en la posicion (" << posicionX << ", " << posicionY << ")." << endl;
}

void cotapulta::recuperar()
{
    resistencia += 50; // Incrementa la resistencia en 50 unidades

    // Limita la resistencia a un máximo de 200
    if (resistencia > 200) {
        resistencia = 200;
    }

    tiempoDeRecarga = 10; // Reinicia el tiempo de recarga
}