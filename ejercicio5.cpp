#include <iostream>
using namespace std;

//FUNCION PARA LEER NUMEROS
void leerNumeros(int numeros[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Ingrese un numero: ";
        cin >> numeros[i];
    }
}

//FUNCION PARA ENCONTRAR AL MAYOR Y MENOR NUMERO
void encontrarMayorMenor(int numeros[], int n, int &mayor, int &menor) {
    mayor = numeros[0];
    menor = numeros[0];
    for (int i = 1; i < n; i++) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }
}

//FUNCION PARA CONTAR LAS REPETICIONES DEL MAYOR Y MENOR NUMERO
void contarRepeticiones(int numeros[], int n, int mayor, int menor, int &repeticionesMayor, int &repeticionesMenor) {
    repeticionesMayor = 0;
    repeticionesMenor = 0;
    for (int i = 0; i < n; i++) {
        if (numeros[i] == mayor) {
            repeticionesMayor++;
        }
        if (numeros[i] == menor) {
            repeticionesMenor++;
        }
    }
}

//FUNCION PARA MOSTRAR LOS RESULTADOS OBTENIDOS
void mostrarResultados(int mayor, int menor, int repeticionesMayor, int repeticionesMenor) {
    cout << "Mayor: " << mayor << " (aparece " << repeticionesMayor << " veces)" << endl;
    cout << "Menor: " << menor << " (aparece " << repeticionesMenor << " veces)" << endl;
}

int main() {
    int n, mayor, menor, repeticionesMayor, repeticionesMenor;
    cout << "Ingrese la cantidad de numeros: ";
    cin >> n;
    int numeros[n];
    leerNumeros(numeros, n);
    encontrarMayorMenor(numeros, n, mayor, menor);
    contarRepeticiones(numeros, n, mayor, menor, repeticionesMayor, repeticionesMenor);
    mostrarResultados(mayor, menor, repeticionesMayor, repeticionesMenor);
    return 0;
}
