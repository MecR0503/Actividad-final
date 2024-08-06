//Ejercicio #4 "Notas de estudiantes"

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Función para calcular la nota final de un estudiante
double calcularNotaFinal(double corte1, double corte2, double corte3) {
    return (corte1 + corte2 + corte3) / 3;
}

int main() {
    const int NUM_ESTUDIANTES = 10;
    string nombresApellidos[NUM_ESTUDIANTES];
    double notasCorte1[NUM_ESTUDIANTES];
    double notasCorte2[NUM_ESTUDIANTES];
    double notasCorte3[NUM_ESTUDIANTES];

    // Ingresar los nombres, apellidos y las notas de cada estudiante
    cout << "Ingrese los datos de los estudiantes:" << endl;
    for (int i = 0; i < NUM_ESTUDIANTES; i++) {
        cout << "Estudiante " << (i + 1) << ":" << endl;
        cout << "Nombre y Apellido: ";
        cin.ignore();
        getline(std::cin, nombresApellidos[i]);
        cout << "Nota del 1er Corte: ";
        cin >> notasCorte1[i];
        cout << "Nota del 2do Corte: ";
        cin >> notasCorte2[i];
        cout << "Nota del 3er Corte: ";
        cin >> notasCorte3[i];
    }

    // Mostrar la tabla con la información de cada estudiante
    cout << "----------------------------------------------------------------------------------------------" << endl;
    cout << left << setw(30) << "Nombre y Apellido" << setw(15) << "Corte 1" << setw(15) << "Corte 2" << setw(15) << "Corte 3" << setw(15) << "Nota Final" << endl;
    cout << "----------------------------------------------------------------------------------------------" << endl;
    for (int i = 0; i < NUM_ESTUDIANTES; i++) {
        double notaFinal = calcularNotaFinal(notasCorte1[i], notasCorte2[i], notasCorte3[i]);
        cout << left << setw(30) << nombresApellidos[i] << setw(15) << notasCorte1[i] << setw(15) << notasCorte2[i] << setw(15) << notasCorte3[i] << setw(15) << notaFinal << endl;
    }
    cout << "----------------------------------------------------------------------------------------------" << endl;

    return 0;
}
