#include <iostream>
using namespace std;

//FUNCION PARA COMPROBAR SI ESTA ORDENADO
bool estaOrdenado(int vector[], int longitud) {
    for (int i = 0; i < longitud - 1; i++) {
        if (vector[i] > vector[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int longitud;
    cout << "Ingrese la longitud del vector: ";
    cin >> longitud;

    int vector[longitud];

    cout << "Ingrese los valores del vector:" << endl;
    for (int i = 0; i < longitud; i++) {
        cout << "Valor " << i + 1 << ": ";
        cin >> vector[i];
    }

    if (estaOrdenado(vector, longitud)) {
        cout << "El vector esta ordenado." << endl;
    } else {
        cout << "El vector no esta ordenado." << endl;
    }

    return 0;
}
