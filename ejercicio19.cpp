#include <iostream>
#include <string>
using namespace std;

//FUNCION PARA COMPROBAR SI ES UN PALINDROMO
bool esPalindromo(const string& frase) {
    string fraseSinEspacios;
    for (int i = 0; i < frase.length(); i++) {
        char c = frase[i];
        if (isalpha(c)) {
            fraseSinEspacios += tolower(c);
        }
    }

    int inicio = 0;
    int fin = fraseSinEspacios.length() - 1;

    while (inicio < fin) {
        if (fraseSinEspacios[inicio] != fraseSinEspacios[fin]) {
            return false; // No es un palíndromo
        }
        inicio++;
        fin--;
    }

    return true; // Es un palíndromo
}

int main() {
    string frase = "dabale arroz a la zorra el abad";

    if (esPalindromo(frase)) {
        cout << "La frase \"" << frase << "\" es un palindromo." << endl;
    } else {
        cout << "La frase \"" << frase << "\" no es un palindromo." << endl;
    }

    return 0;
}
