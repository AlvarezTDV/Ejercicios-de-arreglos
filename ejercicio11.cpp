#include <iostream>
using namespace std;

//FUNCION PARA CALCULAR LAS SUMAS DE LOS POSITIVOS Y NEGATIVOS
void calcularSumas(int numeros[], int& sumaPositivos, int& sumaNegativos) {
    sumaPositivos = 0;
    sumaNegativos = 0;
    for (int i = 0; i < 10; i++) {
        if (numeros[i] > 0) {
            sumaPositivos += numeros[i];
        } else if (numeros[i] < 0) {
            sumaNegativos += numeros[i];
        }
    }
}

int main() {
    int numeros[10];
    int sumaPositivos, sumaNegativos;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    calcularSumas(numeros, sumaPositivos, sumaNegativos);

    cout << "Suma de elementos positivos: " << sumaPositivos << endl;
    cout << "Suma de elementos negativos: " << sumaNegativos << endl;

    return 0;
}
