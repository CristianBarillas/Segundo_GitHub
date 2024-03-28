#include <iostream>

using namespace std;

int main() {
    int matriz[3][3];

    // Solicitar al usuario que ingrese los elementos de la matriz
    cout << "Ingrese los elementos de la matriz 3x3:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Calcular el determinante utilizando la regla de Sarrus
    int determinante = (matriz[0][0] * matriz[1][1] * matriz[2][2]) +
                       (matriz[0][1] * matriz[1][2] * matriz[2][0]) +
                       (matriz[0][2] * matriz[1][0] * matriz[2][1]) -
                       (matriz[0][2] * matriz[1][1] * matriz[2][0]) -
                       (matriz[0][0] * matriz[1][2] * matriz[2][1]) -
                       (matriz[0][1] * matriz[1][0] * matriz[2][2]);

    // Mostrar el determinante
    cout << "El determinante de la matriz es: " << determinante << endl;

    return 0;
}
