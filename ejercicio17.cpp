#include <iostream>
#include <string>
using namespace std;

//FUNCION PARA COMPROBAR SI EL APELLIDO PERTENECE A LA PERSONA
bool contieneApellido(string nombreCompleto, string apellido) {
    // Convertir a mayúsculas tanto el nombre completo como el apellido
    string nombreCompletoMayus = nombreCompleto;
    string apellidoMayus = apellido;
    for (int i = 0; i < nombreCompletoMayus.length(); i++) {
        nombreCompletoMayus[i] = toupper(nombreCompletoMayus[i]);
    }
    for (int i = 0; i < apellidoMayus.length(); i++) {
        apellidoMayus[i] = toupper(apellidoMayus[i]);
    }

    // Buscar el apellido en el nombre completo
    size_t found = nombreCompletoMayus.find(apellidoMayus);
    if (found != string::npos) {
        return true; // El apellido se encontró en el nombre completo
    } else {
        return false; // El apellido no se encontró en el nombre completo
    }
}

int main() {
    string nombreCompleto, apellido;
    cout << "Ingrese el nombre completo: ";
    getline(cin, nombreCompleto);
    cout << "Ingrese el apellido: ";
    getline(cin, apellido);

    if (contieneApellido(nombreCompleto, apellido)) {
        cout << "El apellido pertenece a esa persona." << endl;
    } else {
        cout << "El apellido no pertenece a esa persona." << endl;
    }

    return 0;
}
