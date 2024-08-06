//Ejercicio #1 Números Aleatorios "Array"

#include <iostream>
#include <cstdlib>

// Función para verificar si un número es primo
bool esPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    const int TAMANO = 20;
    int numerosAleatorios[TAMANO];
    int numerosPrimos[TAMANO];
    int contadorPrimos = 0;

    // Generar 20 números aleatorios entre 0 y 99
    for (int i = 0; i < TAMANO; i++) {
        numerosAleatorios[i] = rand() % 100;
    }

    // Identificar y almacenar los números primos en el segundo arreglo
    for (int i = 0; i < TAMANO; i++) {
        if (esPrimo(numerosAleatorios[i])) {
            numerosPrimos[contadorPrimos] = numerosAleatorios[i];
            contadorPrimos++;
        }
    }

    // Mostrar los números aleatorios generados
    std::cout << "Numeros aleatorios generados:" << std::endl;
    for (int i = 0; i < TAMANO; i++) {
        std::cout << numerosAleatorios[i] << " ";
    }
    std::cout << std::endl;

    // Mostrar los números primos encontrados
    std::cout << "Numeros primos encontrados:" << std::endl;
    for (int i = 0; i < contadorPrimos; i++) {
        std::cout << numerosPrimos[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
