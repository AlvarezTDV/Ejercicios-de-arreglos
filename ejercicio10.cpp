#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//FUNCION PARA CALCULAR LA MEDIA
void calcularMedia(int numeros[], int& media) {
    int suma = 0;
    for (int i = 0; i < 30; i++) {
        suma += numeros[i];
    }
    media = suma / 30;
}

//FUNCION PARA CALCULAR LA MEDIANA
void calcularMediana(int numeros[], int& mediana) {
    int temp[30];
    for (int i = 0; i < 30; i++) {
        temp[i] = numeros[i];
    }
    for (int i = 0; i < 29; i++) {
        for (int j = i + 1; j < 30; j++) {
            if (temp[i] > temp[j]) {
                int aux = temp[i];
                temp[i] = temp[j];
                temp[j] = aux;
            }
        }
    }
    mediana = (temp[15] + temp[16]) / 2 ;
}

//FUNCION PARA CALCULAR LA MODA
void calcularModa(int numeros[], int frecuencias[], int& moda) {
    for (int i = 0; i < 1001; i++) {
        frecuencias[i] = 0;
    }
    for (int i = 0; i < 30; i++) {
        frecuencias[numeros[i]]++;
    }
    int max_frecuencia = 0;
    for (int i = 0; i < 1001; i++) {
        if (frecuencias[i] > max_frecuencia) {
            max_frecuencia = frecuencias[i];
            moda = i;
        }
    }
}

int main() {
    srand(time(0));
    int numeros[30];
    int frecuencias[1001];
    int media, mediana, moda;

	cout << "Numeros aleatorios escogidos: " << endl;
    for (int i = 0; i < 30; i++) {
        numeros[i] = rand() % 901 + 100;
        cout << numeros[i] << "  ";
    }
    cout << endl;

    calcularMedia(numeros, media);
    calcularMediana(numeros, mediana);
    calcularModa(numeros, frecuencias, moda);

    cout << "Media: " << media << endl;
    cout << "Mediana: " << mediana << endl;
    cout << "Moda: " << moda << endl;

    return 0;
}
