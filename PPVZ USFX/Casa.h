#pragma once
#include<iostream>
using namespace std;

class Casa
{
	
	private:
		string barreraEliminada;  // Indica si la barrera que protege la casa ha sido eliminada
		string zombisDentro;// Indica si hay zombis dentro de la casa
		string tipoCasa;

	public:

		//constructores

		Casa();
		Casa(string _tipoCasa);
		Casa(string _barreraEliminada, string _zombisDentro, string _tipoCasa);


		//Metodos accesores


		void setBarreraEliminada(string _barreraEliminada) { barreraEliminada = _barreraEliminada; }
		string getBarreraEliminada() { return barreraEliminada; }

		void setZombisDentro(string _zombisDentro) { zombisDentro = _zombisDentro; }
		string getZombisDentro() { return zombisDentro; }

		void setTipoCasa(string _tipoCasa) { tipoCasa = _tipoCasa; }
		string getTipoCasa() { return tipoCasa; }

		bool barreraEstaEliminada(string);

		bool hayZombisDentro(string);

		void eliminarBarrera(string);

		void zombisEntraron();
};
