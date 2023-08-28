#include "ZombieCaraCono.h"




void ZombieCaraCono::niveldeFuria()
{
    DurezaCono += getEnergia();
    if (DurezaCono <= 0) {
        niveldeFuria();
    }
}