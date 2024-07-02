#include <iostream>
using namespace std;

//FUNCION PARA LEER EL VECTOR DE 10 CIFRAS
void leerNumero(int vector[], int n) {
    int num;
    cout << "Ingrese un numero de " << n << " cifras: ";
    cin >> num;
    for (int i = n - 1; i >= 0; i--) {
        vector[i] = num % 10;
        num /= 10;
    }
}

//FUNCION PARA SABER SI EL ELEMENTO INGRESADO ES CAPICUA
bool esCapicua(int vector[], int n) {
    for (int i = 0; i < n / 2; i++) {
        if (vector[i] != vector[n - i - 1]) {
            return false;
        }
    }
    return true;
}

//FUNCION PARA MOSTRAR EL RESULTADO
void mostrarResultado(bool esCapicua) {
    if (esCapicua) {
        cout << "El numero es capicua." << endl;
    } else {
        cout << "El numero no es capicua." << endl;
    }
}

int main() {
    const int n = 10;
    int vector[n];
    leerNumero(vector, n);
    bool resultado = esCapicua(vector, n);
    mostrarResultado(resultado);
    return 0;
}
