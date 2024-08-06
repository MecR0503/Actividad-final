//Ejercicio #2 "Filas y columnas"

#include <iostream>
#include <cstdlib>

// Función para generar un número aleatorio entre 0 y 9
int numeroAleatorio() {
    return rand() % 10;
}

int main() {
    const int FILAS = 4;
    const int COLUMNAS = 5;
    int matriz[FILAS][COLUMNAS];
    int sumasFilas[FILAS] = {0};
    int sumasColumnas[COLUMNAS] = {0};
    int sumaTotal = 0;

    // Generar la matriz de números aleatorios
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            matriz[i][j] = numeroAleatorio();
            sumasFilas[i] += matriz[i][j];
            sumasColumnas[j] += matriz[i][j];
            sumaTotal += matriz[i][j];
        }
    }

    // Mostrar la matriz y las sumas parciales
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            std::cout << matriz[i][j] << "\t";
        }
        std::cout << "| " << sumasFilas[i] << std::endl;
    }

    for (int j = 0; j < COLUMNAS; j++) {
        std::cout << "----";
    }
    std::cout << std::endl;

    for (int j = 0; j < COLUMNAS; j++) {
        std::cout << sumasColumnas[j] << "\t";
    }
    std::cout << "| " << sumaTotal << std::endl;

    return 0;
}
