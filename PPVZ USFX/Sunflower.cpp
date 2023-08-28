#include "Sunflower.h"
//string nombre = "Sunflower";
//int costo = 50;
//int solesGenerados = 25;
//int resistencia = 300;
//float tiempoSpawnSol = 24.25;
//int sol = 25;
//int acumulador = 0;
//int cont = 0;
Sunflower::Sunflower()
{
	nombre = "Sunflower";
	costo = 50;
	solesGenerados = 25;
	resistencia = 300;
	tiempoSpawnSol = 24.25;

}
void Sunflower::generarSol()
{
	cout << "El Girasol ha generado " << solesGenerados << " Soles." << std::endl;
	//for (float i = 0; i <= 24.25; i += 0.1)
	//{
	//	//acumulador += sol;
	//}
}
void Sunflower::spawnSol()
{
	cout << "Tiempo para generar otro sol " << tiempoSpawnSol << "segundos." << endl;
	/*while (acumulador <= 9900)
	{

	}*/
}