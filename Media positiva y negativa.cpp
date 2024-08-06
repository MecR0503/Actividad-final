//Ejercicio #3 "Media Positiva y negativa"

#include <iostream>

// Función para calcular la media de un array de números
double calcularMedia(int numeros[], int longitud) {
    if (longitud == 0) {
        return 0.0;
    }

    int suma = 0;
    for (int i = 0; i < longitud; i++) {
        suma += numeros[i];
    }

    return static_cast<double>(suma) / longitud;
}

int main() {
    const int TAMANO = 10;
    int numeros[TAMANO];
    int positivos[TAMANO]; // Almacenar los números positivos
    int negativos[TAMANO]; // Almacenar los números negativos
    int contadorPositivos = 0;
    int contadorNegativos = 0;

    // Solicitar al usuario que ingresar los 10 números enteros
    for (int i = 0; i < TAMANO; i++) {
        std::cout << "Ingrese 10 numeros enteros: " << (i + 1) << ": ";
        std::cin >> numeros[i];

        if (numeros[i] >= 0) {
            positivos[contadorPositivos] = numeros[i];
            contadorPositivos++;
        } else {
            negativos[contadorNegativos] = numeros[i];
            contadorNegativos++;
        }
    }

    // Calcular y mostrar la media de los valores positivos
    double mediaPositivos = calcularMedia(positivos, contadorPositivos);
    std::cout << "La media de los valores positivos es: " << mediaPositivos << std::endl;

    // Calcular y mostrar la media de los valores negativos
    double mediaNegativos = calcularMedia(negativos, contadorNegativos);
    std::cout << "La media de los valores negativos es: " << mediaNegativos << std::endl;

    return 0;
}
