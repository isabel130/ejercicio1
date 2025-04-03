#include <iostream>

// Calcular el área de una terreno rectangular.

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double longitud, ancho, area;

    cout << "Longitud: ";
    cin >> longitud;
    cout << "Ancho: ";
    cin >> ancho;

    area = longitud * ancho;
    cout << "\n"; // salto de línea
    cout << "El area es: " << fixed << setprecision(2) << area;

    return 0;

}