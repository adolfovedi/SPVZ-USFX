#include<iostream>
#include<stdlib.h>
#include"Zombie.h"// Aqui estamos incluyendo la clase Zombie.h
#include"GameManager.h"
#include"Bala.h"
#include"Cercado.h"
#include"Planta.h"
#include"campoDeBatalla.h"
#include"Casa.h"
#include"TarjetaDePlantas.h"
#include"Pala.h"
#include"Escenario.h"
#include"Lanzaguisantes.h"
#include"Hielaguisantes.h"
#include"Tripitidora.h"
#include"Tripitidora3D.h"
#include"Marigold.h"
#include"Sunflower.h"
#include"TwinSunflower.h"
#include"ZombieCaraCono.h"
#include"ZombieCaraCubo.h"
#include"cotapulta.h"
#include"lanzaMaiz.h"
#include"ZombieAbanderado.h"

using namespace std;

//dato: solo deve haber un mian en todo el proyecto 
int main() {

	

	//Zombie Juanito;

	//nuestro Zombie de nombre Juanito
	Zombie Juanito("Juancho");

	cout << "\t\t\t-----CLASE ZOMBIE---------" << endl;
	cout << "El nombre del zombie es: " <<	Juanito.getNombre() << endl;
	cout<<"la energia del zombie es "<< Juanito.getEnergia() << endl;
	cout << "El nivel de furia del zombie es :"<<Juanito.getNivelFuria() << endl;
	cout<<"la velocidad del zombie es "<< Juanito.getVelocidad() << endl;
	cout<<"la posicion  x del zombie es "<< Juanito.getPosicionX() << endl;
	cout<<"la posicion  y del zombie es "<< Juanito.getPosicionY() << endl;
	cout << "tipo de zombie es " << Juanito.getTipoZombie() << endl;
	cout << '\n' << endl;;

	cout << "\t\t\t-----CLASE GAMEMANAGER---------" << endl;
	GameManager gestorJuego;           
	gestorJuego.IniciarJuego();         
	gestorJuego.Actualizar();       // Actualizar el estado del juego
	cout<<'\n'<<endl;



	cout << "\t\t\t-----CLASE BALA---------" << endl; 
		Zombie AbanderadoF("Zombie Enemigo", 100, 0, 1, 10.0f, 0.0f, "Normal");

		 //Crear una instancia de Bala
		Bala bala(2.0f, 90, 0.0f, 0.0f);

		// Mover la bala y atacar al zombie
		while (AbanderadoF.getEnergia() > 0) {
			bala.moverse();
			cout << "La bala se ha movido a la posicion X: " << bala.getPosicionX() << endl;

			// Atacar al zombie si la bala alcanza su posición
			if (bala.getPosicionX() >= AbanderadoF.getPosicionX()) {
				bala.atacar(AbanderadoF);
				cout << "La bala ha atacado al zombie." << endl;
			}
		}
		cout << "El zombie 'AbanderadoF'   ha sido abatido  SIGA DISPRANDO LA VICTORIA ESTA CERCA  :) :) :)  ."<<endl;

		cout<<'\n'<<endl;


		cout << "\t\t\t-----CLASE PLANTA---------" << endl;

		Planta lan;
		lan.setNombre("Hielaguisantes");
		lan.setColor("Verde");
		lan.setSalud(5);
		lan.setCosto(5);
		lan.setPosicionX(68);
		lan.setPosicionY(120);
		lan.setTiempoDeRecarga(45);
		lan.setDano(20);
		Zombie* zombie = new Zombie("Juanito");

		// Mostrar información inicial
		cout << "Planta:    " << lan.getNombre() << endl;
		cout<<" Salud:   " << lan.getSalud() << endl;
		cout<<" De color :   "<<lan.getColor()<<endl;
		cout<<"Tinene un costo:   "<<lan.getCosto()<<endl;
		

		//// Planta ataca al zombie
		//lanzaguisantes->atacar(zombie);
		//cout<<"El zombie:   "<<zombie->getNombre()<<"   ha sido atacado"<<endl;

		//// Mostrar resultado después del ataque
		//cout << "Despues del ataque----->:" << endl;
		//lanzaguisantes->recibirDano();

		//// Liberar memoria
		//delete lanzaguisantes;
		//delete zombie;





		cout << "\n";




		cout << "\t\t\t-----CLASE TARJETA DE PLANTA---------" << endl;
		TarjetaDePlantas Plantas(10, "Lanzaguisantes", 1.5f, 2.0f, 3.0f);
		cout << "El tiempo de recarga es: " << Plantas.getTiempoDeRecarga() << endl;
		cout << "El nombre de la planta es: " << Plantas.getNombreDePlanta() << endl;
		cout << "La dimension de las casillas es: " << Plantas.getDimension() << endl;
		cout << "La posicion X de las tarjetas es: " << Plantas.getPosicionX() << endl;
		cout << "La posicion Y de las tarjetas es: " << Plantas.getPosicionY() << endl;
		cout << '\n';

		cout << "\t\t\t-----CLASE CERCADO---------" << endl;
		Cercado pared(5, 80, 500.0f, 200.0f, "cerca mas fuerte");
		cout << "la cantidad de daño que recibe es: " << pared.getDaño() << endl;
		cout << "la cantidad de resistencia que tiene es: " << pared.getResistencia() << endl;
		cout << "la posicion x del cerco es: " << pared.getPosicionX() << endl;
		cout << "la posicion y del cerco es: " << pared.getPosicionY() << endl;
		cout << "el tipo de cerca es: " << pared.getTipoCerca() << endl;
		cout << '\n';

		cout << "\t\t\t-----CLASE Pala---------" << endl;
		Pala pala; // Crear una instancia de la clase Pala

		// Usar la pala varias veces y mostrar la resistencia restante
		while (pala.usar()) {
			cout << "Usando la pala. Resistencia restante: " << pala.getResistencia() << endl;
		}

		// La pala ya no tiene resistencia y no puede ser usada
		cout << "La pala se ha quedado sin resistencia. No se puede usar más." << endl;
		cout << '\n';



		/*	cout << "\t\t\t-----CLASE campoDeBatalla---------" << endl;
			campoDeBatalla campoJardin(5, 12);

			cout << "Se creó el campo de césped: " << campoJardin.getNombre() << endl;
			cout << "El ancho del campo de césped es: " << campoJardin.getColumnas() << endl;
			cout << "El largo del campo de césped es: " << campoJardin.getFilas() << endl;*/
			cout << '\n';
		cout << "\t\t\t-----CLASE CASA---------" << endl;
		Casa miCasa;
		miCasa.setTipoCasa("pequeño");
		cout << "el tipo de casa es: " << miCasa.getTipoCasa() << endl;
		cout << "Barrera eliminada: " << miCasa.getBarreraEliminada() << endl;
		cout << "Zombis dentro: " << miCasa.getZombisDentro() << endl;
		cout << '\n';

		cout << "\t\t\t-----CLASE Escenario---------" << endl;
			cout << "¡Has perdido! ¡Inténtalo de nuevo!" <<endl;
		cout << "cuanto es su energia de juanito" << endl;
		cout << "Fin del juego." << endl;
		cout << '\n';



		cout << "\t\t\t-----CLASES 1111111    HEREDADAS Lanzaguisantes---------" << endl;
		// Crear un objeto de la clase Lanzaguisantes
		//Lanzaguisantes lanzaguisantes("Lanzaguisantes Normales ", "Disparar proyectiles", 50, 100, 2, 1, 20, 3, 0, false, false, true, 100, 2, 0, 0, 0);
		//Lanzaguisantes Girasol;
		//// Mostrar información inicial
		//Girasol.setNombre("Lanzaguisantes Normales");
		//Girasol.setSalud(100);
		//Girasol.setCosto(50);
		//Girasol.setTiempoDeRecarga(2);
		//Girasol.setPosicionX(1);
		//Girasol.setPosicionY(20);
		//Girasol.setProdDeSol(3);
		//Girasol.setDesbloNivel(0);
		//cout<<"El nombre de la planta es: "<<Girasol.getNombre()<<endl;
		//cout<<"La salud de la planta es: "<<Girasol.getSalud()<<endl;
		//cout<<"El costo de la planta es: "<<Girasol.getCosto()<<endl;
		//cout<<"El tiempo de recarga de la planta es: "<<Girasol.getTiempoDeRecarga()<<endl;
		//cout<<"La posicion X de la planta es: "<<Girasol.getPosicionX()<<endl;
		//cout<<"La posicion Y de la planta es: "<<Girasol.getPosicionY()<<endl;
		//cout<<"prduccion del sol  "<<Girasol.getProdDeSol()<<endl;
		//cout<<"Se desbloque el nivel :"<<Girasol.getDesbloNivel()<<endl;
		//// Llamar a métodos de la clase Lanzaguisantes
		//Girasol.colocar(3, 4);

		//Girasol.disparar();
		// Crear un Lanzaguisantes
		//Lanzaguisantes lan1(3, 4, "Lanzaguisantes", "Verde", 50, 2);
		//////Lanzaguisantes lan1(3, 4, "Lanzaguisantes", "Verde", 50, 2, 100, 2, 0, false, false, true, 100, 2, 0, 0, 0);
		//////// Acceder a los atributos y métodos del Lanzaguisantes
		//////
		//////	cout << "Nombre: " << lan1.getNombre() << endl;
		//////	cout << "Color: " << lan1.getColor() << endl;
		//////	cout << "Posición X: " << lan1.getPosicionX() << endl;
		//////	cout << "Posición Y: " << lan1.getPosicionY() << endl;
		//////	cout << "Costo: " << lan1.getCosto() << endl;
		//////	cout << "Velocidad de Ataque: " << lan1.getVelocidadDeAtaque() << endl;
		//////// Realizar otras operaciones con el Lanzaguisantes
		//////			lan1.colocar(3, 4); 
		//////			lan1.recogerSol(); // Recoger sol
		//////			lan1.verificarRecarga(); // Verificar si está recargado
		//////			lan1.Disparar(); // Intentar disparar un proyectil
		//////			lan1.Actualizar(); // Actualizar el estado del Lanzaguisantes
		//////			lan1.recibirDano(); // Recibir daño

		//////

		Lanzaguisantes lan1;
		lan1.setNombre("Lanzaguisantes");
		lan1.setColor("Verde");
		lan1.setAlcance(50);
		lan1.actualizar();
		lan1.recibirDano();
		lan1.recogerSol();
		lan1.verificarRecarga();
		lan1.Disparar();
		lan1.colocar();
		cout << "Nombre: " << lan1.getNombre() << endl;
		cout << "Color: " << lan1.getColor() << endl;
		cout << "Posición X: " << lan1.getPosicionX() << endl;
		cout << "Posición Y: " << lan1.getPosicionY() << endl;
			
			










		//cout<<"El nombre de la planta es: "<<lanzaguisantes.getNombre()<<endl;
		//cout<<"La salud de la planta es: "<<lanzaguisantes.getSalud()<<endl;
		//cout<<"El costo de la planta es: "<<lanzaguisantes.getCosto()<<endl;
		//cout<<"El tiempo de recarga de la planta es: "<<lanzaguisantes.getTiempoDeRecarga()<<endl;
		//cout<<"La posicion X de la planta es: "<<lanzaguisantes.getPosicionX()<<endl;
		//cout<<"La posicion Y de la planta es: "<<lanzaguisantes.getPosicionY()<<endl;
		//cout<<"prduccion del sol  "<<lanzaguisantes.getProdDeSol()<<endl;
		//cout<<"Se desbloque el nivel :"<<lanzaguisantes.getDesbloNivel()<<endl;
		//// Llamar a métodos de la clase Lanzaguisantes
		//lanzaguisantes.colocar(3, 4); // Colocar en la posición (3, 4)
		//lanzaguisantes.recogerSol(); // Recoger sol
		//lanzaguisantes.verificarRecarga(); // Verificar si está recargado
		//lanzaguisantes.Disparar(); // Intentar disparar un proyectil
		//lanzaguisantes.Actualizar(); // Actualizar el estado del Lanzaguisantes
		//lanzaguisantes.recibirDano(); // Recibir daño


		cout << "\t\t\t-----CLASES Hielaguisantes  COLOR CELESTES ---------" << endl;
		
		//Hielaguisantes hielaguisantes2("Hielaguisante Azul", "Azul", 10, 5, 50, 2, true, "Hielo Brillante");
		Hielaguisantes hielaguisantes2;
		hielaguisantes2.setNombre("Hielguisatnes");
		hielaguisantes2.setColor("Azul");
		hielaguisantes2.setAlcance(50);
		hielaguisantes2.actualizar();
		hielaguisantes2.recibirDano();
		hielaguisantes2.recogerSol();
		hielaguisantes2.verificarRecarga();
		Zombie* carlos = new Zombie("Juanito");
		// Llamar a los métodos de Hielaguisantes2
		hielaguisantes2.congelar( carlos); // No hay objetivo, mostrará el mensaje de que no hay zombies en el alcance
		hielaguisantes2.actualizar(); // Mostrará el mensaje según si el zombie está congelado o no
		hielaguisantes2.Disparar(); // Mostrará el mensaje de disparo del hielaguisante
		cout<<"su nombre de nuestra Planta:"<<hielaguisantes2.getNombre()<<endl;
		cout<<"su salud de nuestra Planta:"<<hielaguisantes2.getSalud()<<endl;
		cout<<"su costo de nuestra Planta:"<<hielaguisantes2.getCosto()<<endl;

		cout<<"\t\t\t-----CLASES TTIPTIDORA VERDE DE MAS COSTO Y RAPIDOs---------" << endl;
		Tripitidora trip1;
		Zombie* zombi3 = new Zombie("Pedro");
		trip1.setNombre("planta Potente");
		cout<<"su nombre de nuestra Planta:"<<trip1.getNombre()<<endl;
		cout<<"su salud de nuestra Planta:"<<trip1.getSalud()<<endl;
		cout<<"su costo de nuestra Planta:"<<trip1.getCosto()<<endl;
		trip1.dosDisparosAlVez(zombi3);

		cout<<"\t\t\t-----TRIPTIDORA DE 3 DISPAROS A LA VES---------" << endl;

		Tripitidora3D tripPotente;
		Zombie* zombi4 = new Zombie("Pedro");
		tripPotente.setNombre("planta Potente");
		tripPotente.setPosicionX(3);
		tripPotente.setPosicionY(4);
		tripPotente.setAlcance(3);
		tripPotente.setSalud(27);
		tripPotente.setCosto(200);
		tripPotente.setColor("verde");
		tripPotente.tresDisparosAlVez(zombi4);
		cout<<"su nombre de nuestra Planta:"<<tripPotente.getNombre()<<endl;
		cout<<"su salud de nuestra Planta:"<<tripPotente.getSalud()<<endl;
		cout<<"su costo de nuestra Planta:"<<tripPotente.getCosto()<<endl;
		cout<<"su posicion X de nuestra Planta:"<<tripPotente.getPosicionX()<<endl;
		cout<<"su posicion Y de nuestra Planta:"<<tripPotente.getPosicionY()<<endl;
		cout<<"su alcance de nuestra Planta:"<<tripPotente.getAlcance()<<endl;


		cout << "\t\t\t-----Marigold---------" << endl;
		Marigold Productora;
		Productora.setNombre("Margarita");
		Productora.setCosto(50);
		Productora.setTiempoDeRecarga(24);




		//Margarita.setImagen("MarigoldJPG");

		cout << "El nombre de la planta es: " << Productora.getNombre() << endl;
		
		cout << "El costo de la planta es:  " << Productora.getCosto() << endl;
		cout << "El tiempo de recarga en la casilla es: " << Productora.getTiempoDeRecarga() << endl;
		Productora.spawnMoneda();

		// Productora.actualizar();
		
		 cout << "\t\t\t-----Sunflower---------" << endl;
		 Sunflower Girasol;
		 //Girasol.setnombre();
		 //Girasol.setcosto();
		 //Girasol.setTiempoDeRecarga(24);

		// Girasol.setImagen("SunflowerJPG");
		 cout << "El nombre de la planta es: " << Girasol.getnombre() << endl;
		 cout << "El costo de la planta es:  " << Girasol.getcosto() << endl;
		 cout << "El tiempo de recarga en la casilla es: " << Girasol.getTiempoDeRecarga() << endl;

		 cout << "\t\t\t-----TwinSunflower---------" << endl;
		 TwinSunflower Birasol;
		// Birasol.setImagen("TwinSunflowerJPG");
		 cout << "El nombre de la planta es: " << Birasol.getNombre() << endl;
		 cout << "El costo de la planta es:  " << Birasol.getCosto() << endl;
		 cout << "El tiempo de recarga en la casilla es: " << Birasol.getTiempoDeRecarga() << endl;
		

		cout << "\t\t\t---------------------> Zombie Cara Cono  <----------------------------" << endl;
		
		ZombieCaraCono CaraCono;
		CaraCono.setEnergia(100);
		CaraCono.setNombre("CaraCono");
		cout << "El nombre del zombie es: " << CaraCono.getNombre() << endl;
		cout << "La energia del zombie es: " << CaraCono.getEnergia() << endl;
		cout << "La velocidad del zombie es: " << CaraCono.getVelocidad() << endl;
		cout << "La posicion X del zombie es: " << CaraCono.getPosicionX() << endl;
		cout << "La posicion Y del zombie es: " << CaraCono.getPosicionY() << endl;
		cout << "El tipo de zombie es: " << CaraCono.getTipoZombie() << endl;
		CaraCono.niveldeFuria();
		cout << "La posicion X del zombie es: " << CaraCono.getPosicionX() << endl;
		cout << "La posicion Y del zombie es: " << CaraCono.getPosicionY() << endl;
		CaraCono.recibirDano();


		cout<< "\t\t\t---------------------> Zombie Caracubo  <----------------------------" << endl;
		ZombieCaraCubo CaraCubo;
		CaraCubo.setNombre("Cara Cubo");
		cout << "El nombre del zombie es: " << CaraCubo.getNombre() << endl;
		cout << "La energia del zombie es: " << CaraCubo.getEnergiaCubo() << endl;
		cout << "La velocidad del zombie es: " << CaraCubo.getVelocidad() << endl;
		cout << "La posicion X del zombie es: " << CaraCubo.getPosicionX() << endl;
		cout << "La posicion Y del zombie es: " << CaraCubo.getPosicionY() << endl;
		cout << "El tipo de zombie es: " << CaraCubo.getTipoZombie() << endl;
		cout << "La posicion X del zombie es: " << CaraCubo.getPosicionX() << endl;
		cout << "La posicion Y del zombie es: " << CaraCubo.getPosicionY() << endl;
		cout << endl;

		cout<< "\t\t\t---------------------> Zombie Cotapulta <----------------------------" << endl;
		// Crear una instancia de cotapulta
		cotapulta miCotapulta;
		
		cout << "Informacion inicial de la cotapulta:" << endl;
		miCotapulta.mostrarInfo();
		cout << "Disparando coles con la cotapulta:" << endl;
		miCotapulta.disparar();
		cout << endl << "Realizando recuperacion de cotapulta:" << endl;
		miCotapulta.recuperar();
		cout << endl << "Dibujando cotapulta:" << endl;
		miCotapulta.dibujar();




		cout << "\n\n\n  LANZA MAIZ------------------------------------------------ " << endl;

		lanzaMaiz miLanzaMaiz; // Crear una instancia de lanzaMaiz

		// Mostrar información inicial de la lanzaMaiz
		cout << "Información inicial de la lanzaMaiz:" << std::endl;
		miLanzaMaiz.mostrarInfo();

		// Realizar un ataque
		Planta otraPlanta; // Supongamos que también tienes otra planta
		cout << endl << "Realizando ataque de lanzaMaiz:" << endl;
		miLanzaMaiz.atacar(otraPlanta);

		// Verificar recarga
		cout << endl << "Verificando recarga:" << endl;
		miLanzaMaiz.verificarRecarga();

		// Actualizar la lanzaMaiz
		cout << endl << "Actualizando lanzaMaiz:" << endl;
		miLanzaMaiz.actualizar();

		// Dibujar la lanzaMaiz
		cout << endl << "Dibujando lanzaMaiz:" << endl;
		miLanzaMaiz.dibujar();



		cout << "\t\t\t---------------------> Zombie Abanderado  <----------------------------" << endl;
		ZombieAbanderado CaraAbanderado;
		CaraAbanderado.setNombre("CaraAbanderado");
		cout << "El nombre del zombie es: " << CaraAbanderado.getNombre() << endl;
		cout << "La energia del zombie es: " << CaraAbanderado.getEnergia() << endl;
		cout << "La velocidad del zombie es: " << CaraAbanderado.getVelocidad() << endl;
		cout << "La posicion X del zombie es: " << CaraAbanderado.getPosicionX() << endl;
		cout << "La posicion Y del zombie es: " << CaraAbanderado.getPosicionY() << endl;
		cout << "El tipo de zombie es: " << CaraAbanderado.getTipoZombie() << endl;
		cout << "La posicion X del zombie es: " << CaraAbanderado.getPosicionX() << endl;
		cout << "La posicion Y del zombie es: " << CaraAbanderado.getPosicionY() << endl;
		cout << endl;



		system("pause");
	return 0;

}
