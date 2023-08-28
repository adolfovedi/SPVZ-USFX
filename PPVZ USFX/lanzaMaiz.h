#pragma once
#include "Planta.h"
class lanzaMaiz : public Planta
{
private:

	string dureza;
	string sePlanta;
	string desbloqueo;
	string mejora;

public:
	lanzaMaiz();



	void setDureza(string _dureza) { dureza = _dureza; }
	string getDureza() { return dureza; }

	void setSePlanta(string _sePlanta) { sePlanta = _sePlanta; }
	string getSePlanta() { return sePlanta; }

	void setDesbloqueo(string _desbloqueo) { desbloqueo = _desbloqueo; }
	string getDesbloqueo() { return desbloqueo; }

	void setMejora(string _mejora) { mejora = _mejora; }
	string getMejora() { return mejora; }



	void verificarRecarga();
	void mostrarInfo();
	void actualizar();
	void dibujar();
	void atacar(Planta& planta);

};

