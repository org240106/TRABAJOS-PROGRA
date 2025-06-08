#include <iostream>
#include <time.h>

using namespace std;

int main() {
    int n = 10;  // Tamaño de la matriz
    int matriz[100][100];  // Se puede hasta 100x100

    srand(time(0));  // Semilla para números aleatorios

    // 1. Llenar la matriz con valores aleatorios del 0 al 99
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = rand() % 100;
        }
    }

    // 2. Imprimir la matriz completa
    cout << "Matriz completa (" << n << "x" << n << "):" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Formato con ancho fijo para alinear bien
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    // 3. Imprimir la diagonal principal en forma diagonal visual
    cout << "\nDiagonal principal en forma diagonal:" << endl;
    for (int i = 0; i < n; i++) {
        // Espacios para alinear el número en forma diagonal
        for (int j = 0; j < i; j++) {
            cout << "\t";
        }
        cout << matriz[i][i] << endl;
    }

    return 0;
}
