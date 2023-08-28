#include "Marigold.h"


int acumulador = 0;
int moneda = 25;
int monedasGeneradas = 10;
Marigold::Marigold()
{
	
	//int cont = 0;
	 nombre = "Marigold";
	 costo = 50;
	 
	 resistencia = 300;
	tiempoSpawnMonedas = 24.25;

}
void Marigold::generarMoneda()
{
	cout << "La margarita ha generado " << monedasGeneradas << " Monedas." << endl;
	//for (float i = 0; i <= 24.25; i += 0.1)
	//{
	//	acumulador += moneda;
	//}
}
void Marigold::spawnMoneda()
{
	cout << "Tiempo para generar otra moneda " << tiempoSpawnMonedas << "segundos." << endl;
	//while (acumulador <= 9900)
	//{
	//
	//}
}

