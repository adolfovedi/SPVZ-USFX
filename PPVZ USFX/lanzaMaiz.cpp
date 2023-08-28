#include "lanzaMaiz.h"

lanzaMaiz::lanzaMaiz() {
   
  
    posicionX = 80;
    posicionY = 20;
    tiempoDeRecarga = 10;
    dureza = "Baja = 100";
    sePlanta = "suelo, nenofar o maceta ";
    desbloqueo = "Nivel 1-3";
    mejora = "Masorcanon";
}
void lanzaMaiz::atacar(Planta& planta) {
    int dano=34;
    if (tiempoDeRecarga <= 0) {
        cout << "LanzaMaiz ataca a " << planta.getNombre() << " causando " << dano << " de dano." << endl;
        tiempoDeRecarga = 10;
    }
    else {
        cout << "LanzaMaiz aun se esta recargando." << endl;
    }
}

void lanzaMaiz::verificarRecarga() {
    if (tiempoDeRecarga > 0) {
        cout << "LanzaMaiz esta recargando. Tiempo restante: " << tiempoDeRecarga << " segundos." << endl;
    }
    else {
        cout << "LanzaMaiz esta listo para atacar." << endl;
    }
}
void lanzaMaiz::mostrarInfo()
{
   // cout << "Nombre: " << nombre << endl;
    cout << "Posicion: (" << posicionX << ", " << posicionY << ")" << endl;
    //cout << "Costo: " << costo << endl;
    cout << "Tiempo de Recarga: " << tiempoDeRecarga << " segundos" << endl;
   // cout << "Alcance: " << alcance << endl;
    cout << "Dureza: " << dureza << endl;
    cout << "Se planta en: " << sePlanta << endl;
    cout << "Desbloqueo: " << desbloqueo << endl;
    cout << "Mejora: " << mejora << endl;
}






void lanzaMaiz::actualizar()
{
    if (tiempoDeRecarga > 0)
    {
        tiempoDeRecarga--; // Reducir el tiempo de recarga en cada actualización
        std::cout << "LanzaMaiz esta recargando. Tiempo restante: " << tiempoDeRecarga << " segundos." << std::endl;
    }
    else
    {
        std::cout << "LanzaMaiz esta listo para atacar." << std::endl;
    }
}

void lanzaMaiz::dibujar() {
    cout << "Dibujando LanzaMaiz en la posicion (" << posicionX << ", " << posicionY << ")." << endl;
    // Lógica para dibujar la planta en una interfaz gráfica
}

