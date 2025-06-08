#include <iostream>
#include <time.h>

using namespace std;

int main() {
    int n = 10;
    int matriz[100][100];

    // Semilla para generar números aleatorios distintos cada vez
    srand(time(0));

    // Generar matriz cuadrada con números aleatorios del 0 al 99
    cout << "Matriz generada:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = rand() % 100;
            cout << matriz[i][j] << "\t";  // Mostrar la matriz
        }
        cout << endl;
    }

   
    cout << "\nDiagonal principal en forma diagonal:\n";
    for (int i = 0; i < n; i++) {
        // Espacios para alinear en diagonal
        for (int espacio = 0; espacio < i; espacio++) {
            cout << "\t";
        }
        cout << matriz[i][i] << endl;
    }

    return 0;
}