#include <iostream>
#include <cctype>
#include <cstdlib>

using namespace std;

int main() {
    char lineaTexto[256];
    int n = 0;

    cout << "Ingrese una linea de texto: ";
    cin.getline(lineaTexto, 256);

    char digitos[256];
    int j = 0;

    for (int i = 0; lineaTexto[i]!= '\0'; i++) {
        if (isdigit(lineaTexto[i])) {
            digitos[j] = lineaTexto[i];
            j++;
        }
    }

    digitos[j] = '\0';

    if (j > 0) {
        n = atoi(digitos);
        n += 2;
    }

    if (n == 0) {
        cout << "No se encontraron dígitos en la entrada." << endl;
    } else {
        cout << "Resultado: " << n << endl;
    }

    return 0;
}
