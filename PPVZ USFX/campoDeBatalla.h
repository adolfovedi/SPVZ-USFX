
#pragma once
#include <iostream>

	using namespace std;

    class campoDeBatalla
    {
    private:

        int filas;
        int columnas;
        float tamano;

    public:

        // Constructor
        campoDeBatalla(int, int, float );

        void setFilas(int _filas) { filas = _filas; }int getFilas()  { return filas; }
        void setColumnas(int _columnas) { columnas = _columnas; }int getColumnas() const { return columnas; }
        void setTamano(float _tamano) { tamano = _tamano; }float getTamano() const { return tamano; }

        // Método para colocar una planta en el césped
        void Agregar();
        void Mover();
        void Colisiones();
        void Actualizar();
    };

