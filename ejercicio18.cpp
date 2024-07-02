#include <iostream>
#include <string>
using namespace std;

//FUNCION PARA COMPROBAR SI ESTAN BALANCEADOS LOS PARENTESIS
bool estabalanceado(const string& frase) {
    int contador = 0;

    for (int i = 0; i < frase.length(); i++) {
        if (frase[i] == '(') {
            contador++;
        } else if (frase[i] == ')') {
            if (contador == 0) {
                return false;
            }
            contador--;
        }
    }

    return contador == 0;
}

int main() {
    string frase1 = "(ccc(ccc)cc((ccc(c))))";
    string frase2 = ")ccc(ccc)cc((ccc(c)))(";

    cout << "Frase 1: " << (estabalanceado(frase1) ? "Balanceada" : "No balanceada") << endl;
    cout << "Frase 2: " << (estabalanceado(frase2) ? "Balanceada" : "No balanceada") << endl;

    return 0;
}
