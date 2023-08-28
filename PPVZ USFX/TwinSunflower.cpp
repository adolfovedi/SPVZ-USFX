#include "TwinSunflower.h"


//int sol = 25;
//int acumulador = 0;
//int cont = 0;
//string nombre = "TwinSunflower";
//int costo = 150;
//int solesGenerados = 25 * 2;
//int resistencia = 300;
//float tiempoSpawnSol = 24.25;

TwinSunflower::TwinSunflower()
{
	nombre = "TwinSunflower";
	costo = 150;
	solesGenerados = 25 * 2;
	resistencia = 300;
	tiempoSpawnSol = 24.25;

}
void TwinSunflower::generarSol()
{
	cout << "El Birasol ha generado " << solesGenerados << " Soles." << std::endl;
	//for (float i = 0; i <= 24.25; i += 0.1)
	//{
	//	acumulador += sol;
	//}
}
void TwinSunflower::spawnSol()
{
	cout << "Tiempo para generar otro sol " << tiempoSpawnSol << "segundos." << endl;
	//while (acumulador <= 9900)
	//{

	//}
}