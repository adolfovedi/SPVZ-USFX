#pragma once
#include "Zombie.h"
class ZombieCaraCubo :public Zombie
{
private:

    int energiaCubo = 100;

public:

    ZombieCaraCubo() {};

    int getEnergiaCubo() const;

};

