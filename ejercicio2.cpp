#include <iostream>
using namespace std;

//FUNCION PARA PONER CADA PALABRA EN UNA LINEA SEPARADA
void eco( char cadena[] ) {
	int n = 0;
	while ( cadena[ n ] != '\0' ) {
		n++;
	}
	
	for ( int i = 0; i <= n; i++ ) {
		cout << cadena[ i ];
		if ( cadena[ i ] == ' ' ) {
			cout << endl;
		}
	}
}

int main() {
	char cadena[] = "Este texto tiene mucho eco";
	eco( cadena );
	return 0;
}
