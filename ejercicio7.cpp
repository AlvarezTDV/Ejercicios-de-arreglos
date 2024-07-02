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

//FUNCION PARA INVERTIR EL VECTOR
void invertirVector(int vector[], int n) {
    int temp;
    for (int i = 0; i < n / 2; i++) {
        temp = vector[i];
        vector[i] = vector[n - i - 1];
        vector[n - i - 1] = temp;
    }
}

//FUNCION PARA IMPRIMIR EL VECTOR INVERTIDO
void imprimirVector(int vector[], int n) {
    cout << "Vector invertido: ";
    for (int i = 0; i < n; i++) {
        cout << vector[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Ingrese la cantidad de elementos del vector: ";
    cin >> n;
    int vector[n];
    leerVector(vector, n);
    invertirVector(vector, n);
    imprimirVector(vector, n);
    return 0;
}
