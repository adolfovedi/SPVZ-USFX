#include "Tarjet_de_plantas.h"

Tarjeta_de_plantas::Tarjeta_de_plantas()
{
	Tiempo_de_recarga = 10;
	Nombre_de_planta = "Carnivora";
	Dimension = 5.0f;
	PosicionX = 50.0f;
	PosicionY = 40.0f;
}
Tarjeta_de_plantas::Tarjeta_de_plantas(int Tiempo_de_recarga, string Nombre_de_planta, float Dimension, float PosicionX, int PosicionY)
{
	Tiempo_de_recarga = Tiempo_de_recarga;
	Nombre_de_planta = Nombre_de_planta;
	Dimension = Dimension;
	PosicionX = PosicionX;
	PosicionY = PosicionY;

}
void Tarjeta_de_plantas::lugar_tarjetas(float, float)
{
	PosicionX += Dimension;
	PosicionY += Dimension;

}
//Tarjeta_de_plantas::Tarjeta_de_plantas(int Tiempo_de_recarga, string Nombre_de_planta, float Dimension, float PosicionX, int PosicionY)
//{
//	Tiempo_de_recarga = _Tiempo_de_recarga;
//	Nombre_de_planta = _Nombre_de_planta;
//	Dimension = _Dimension;
//	PosicionX = _PosicionX;
//	PosicionY = _PosicionY;
//}






//void Tarjeta_de_plantas::Lugar_tarjetas()
//
//{	
//
//	//PosicionX += Dimension;
//	//PosicionY += Dimension;
//}
void Tarjeta_de_plantas::Recarga(int Tiempo_de_recarga)
{
	/*return Tiempo_de_recarga <= 0;*/
}
