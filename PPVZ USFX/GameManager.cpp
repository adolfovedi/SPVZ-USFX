#include "GameManager.h"
#include"Zombie.h"



GameManager::GameManager()
{
	oleadaActual = 1;                  // Inicializar oleada actual
	monedaJugador = 10;             // Inicializar puntuación del jugador

    // Inicializar la semilla para generar números realmente aleatorios
    srand(static_cast<unsigned int>(time(nullptr)));

    // Generar un número aleatorio entre 1 y 100
    int numeroAleatorio = rand() % 100 + 1;

    // Imprimir el número aleatorio generado
    std::cout << "numero eleatorio nos muestra la puntuacion del jugador: " << numeroAleatorio << endl;
    cout << "para ganar debes obtener mas ||||||   +50 PUNTOS  ||| DE LO CONTRARIO PIERDES" << endl;

	puntuacionJugador = numeroAleatorio;               // Ejemplo de cantidad inicial de moneda
	finDelJuego = false;               // El juego comienza, no está terminado
	// Inicializar otros atributos y cargar configuración del juego si es necesario
}

void GameManager::IniciarJuego()
{
    cout << "\t,,,,,,,,,,,,,,,,,,,¡El juego ha comenzado!................" << endl;
    // Lógica para iniciar el juego, generar la primera oleada, etc.
}

void GameManager::Actualizar()
{
    cout << "Actualizando............................ estado del juego..." << endl;
    if (puntuacionJugador > 30 && puntuacionJugador < 70) {
        //finDelJuego = true;
        cout << "|||_____-----   CONTINUA  --TU PUEDES AUN TIENES VIDAS    ----" << endl;
   
    }
    else if (puntuacionJugador>70) {
        //finDelJuego = true;
        cout << "|||_____-----   GANASTE   ------_______|||||¡QUE CRACK Has ganado! El juego ha terminado." << endl;
     
    }
	else if (puntuacionJugador < 30) {
		//finDelJuego = true;
		cout << "|||_____-----   PERDISTE   ------_______|||||sigue intentando --" << endl;
	  
	}
   
    
    // Lógica del juego que se actualiza en cada ciclo
    // Verificar victoria/derrota, actualizar oleadas, etc.
    //cout << "¡Has ganado! El juego ha terminado." << ganaste << endl;
}

void GameManager::aumentarOleadaActual()
{
    oleadaActual++;
}

void GameManager::aumentarPuntuacionJugador(float _puntuacion)
{
    puntuacionJugador += _puntuacion;
}

void GameManager::aumentarMonedaJugador(int moneda)
{ 
    monedaJugador += moneda; 

}

void GameManager::disminuirMonedaJugador(int _moneda)
{
    monedaJugador -= _moneda; 
}

void GameManager::reiniciarGameManager() 
{
    oleadaActual = 0;
    puntuacionJugador = 0; 
    monedaJugador = 0; 
    finDelJuego = false; 
}

bool GameManager::verificarVictoria()
{
    // Verificar si el jugador ha alcanzado una puntuación específica para ganar
    return puntuacionJugador >= 1000; // Ejemplo de condición de victoria
}

bool GameManager::verificarDerrota()
{
    // Verificar si el jugador ha quedado sin monedas o energía para perder
    return (monedaJugador <= 0 );
}
