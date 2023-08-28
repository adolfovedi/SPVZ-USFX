#pragma once
#include "Planta.h"
#include "Zombie.h"
#include <iostream>
#include <string>
using namespace std;


class Lanzaguisantes :public Planta
{

private:
	//atributos
	bool ProdDeSol;               
	bool Especial;                
	bool desbloNivel;             
	int resistenciaPlanta;        
	int velocidadDeAtaque;        
	int produccionDeSoles;        
	int contadorDeAtaque;         
	int contadorDeRecarga;        


public:
	//constructor
	Lanzaguisantes();
	//Lanzaguisantes(int,int,std::string, std::string, int, int, int, int, int, int,  bool, bool, bool, int ,int, int, int, int );

	//metodos set y get
	void setProdDeSol(bool _ProdDeSol) { ProdDeSol = _ProdDeSol; }bool getProdDeSol() { return ProdDeSol; }
	void setEspecial(bool _Especial) { Especial = _Especial; }bool getEspecial() { return Especial; }
	void setDesbloNivel(bool _desbloNivel) { desbloNivel = _desbloNivel; }bool getDesbloNivel() { return desbloNivel; }
	void setResistenciaPlanta(int _resistenciaPlanta) { resistenciaPlanta = _resistenciaPlanta; }int getResistenciaPlanta() { return resistenciaPlanta; }
	void setVelocidadDeAtaque(int _velocidadDeAtaque) { velocidadDeAtaque = _velocidadDeAtaque; }int getVelocidadDeAtaque() { return velocidadDeAtaque; }
	void setProduccionDeSoles(int _produccionDeSoles) { produccionDeSoles = _produccionDeSoles; }int getProduccionDeSoles() { return produccionDeSoles; }
	void setContadorDeAtaque(int _contadorDeAtaque) { contadorDeAtaque = _contadorDeAtaque; }int getContadorDeAtaque() { return contadorDeAtaque; }
	void setContadorDeRecarga(int _contadorDeRecarga) { contadorDeRecarga = _contadorDeRecarga; }int getContadorDeRecarga() { return contadorDeRecarga; }

	// Métodos heredados de Planta
	void atacar(Zombie*) override;
	void recogerSol()override;
	 void colocar()override;
	void verificarRecarga()override;
	void recibirDano()override;
	

	// Métodos específicos de Lanzaguisantes
	virtual void Disparar();  // Método para realizar un disparo
	void tiempoDisparo();  // Método para calcular el tiempo de disparo
	//void actualizar() override {};  // Método para actualizar el estado del Lanzaguisantes
};

