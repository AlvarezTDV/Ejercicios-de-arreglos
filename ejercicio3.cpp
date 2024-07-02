#include <iostream>
using namespace std;

//FUNCION PARA CONTAR LA OCURRENCIA DE UNA LETRA ESPECIFICA
void repeticion( char cadena[], char letra[] ) {
	int n = 0;
	while ( cadena[ n ] != '\0' ) {
		n++;
	}
	
	int l = 0;
	for ( int i = 0; i <= n; i++ ) {
		if ( cadena[ i ] == letra[0] ) {
			l++;
		}
	}
	cout << letra[0] << " se repitio: " << l << " veces";
}

int main() {
	char cadena[50];
	char letra[0];
	cout << "Que letra especifica desea contar su ocurrencia: ";
	cin >> letra;
	cout << "Ingrese una palabra: ";
	cin >> cadena;
	repeticion( cadena, letra );
	return 0;
}
