#include <iostream>
using namespace std;

//FUNCION PARA LEER ELEMENTOS DEL VECTOR
void leerVector(int vector[], int n) {
    cout << "Ingrese " << n << " elementos del vector:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector[i];
    }
}

//FUNCION PARA CALCULAR LA SUMA DE LOS IMPARES Y PARES
void calcularSumaParImpar(int vector[], int n, int &sumaPar, int &sumaImpar) {
    sumaPar = 0;
    sumaImpar = 0;
    for (int i = 0; i < n; i++) {
        if (vector[i] % 2 == 0) {
            sumaPar += vector[i];
        } else {
            sumaImpar += vector[i];
        }
    }
}

//FUNCION PARA MOSTRAR LOS RESULTADOS
void mostrarResultados(int sumaPar, int sumaImpar) {
    cout << "Suma de componentes de indice par: " << sumaPar << endl;
    cout << "Suma de componentes de indice impar: " << sumaImpar << endl;
}

int main() {
    int n, sumaPar, sumaImpar;
    cout << "Ingrese la cantidad de elementos del vector: ";
    cin >> n;
    int vector[n];
    leerVector(vector, n);
    calcularSumaParImpar(vector, n, sumaPar, sumaImpar);
    mostrarResultados(sumaPar, sumaImpar);
    return 0;
}
