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

//FUNCION PARA ROTAR EL VECTOR
void rotarVector(int vector[], int n) {
    int ultimo = vector[n - 1];
    for (int i = n - 1; i > 0; i--) {
        vector[i] = vector[i - 1];
    }
    vector[0] = ultimo;
}

//FUNCION PARA IMPRIMIR EL VECTOR YA ROTADO
void imprimirVector(int vector[], int n) {
    cout << "Vector rotado: ";
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
    rotarVector(vector, n);
    imprimirVector(vector, n);
    return 0;
}
