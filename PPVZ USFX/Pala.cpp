
#include "Pala.h"
Pala::Pala() : resistencia(8) {} // Constructor que establece la resistencia inicial

bool Pala::usar() {
    if (resistencia > 0) {
        resistencia--;
        return true; // La pala aún tiene resistencia y puede ser usada
    }
    return false; // La pala ya no tiene resistencia y no puede ser usada
}
int Pala::getResistencia() {

    return resistencia; // Devolver el valor actual de la resistencia

}