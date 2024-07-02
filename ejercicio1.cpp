#include <iostream>
using namespace std;

//FUNCION PARA PONER UNA MAYUSCULA AL INICIO DE CADA PALABRA
void mayuscula( char nombre[] ) {
	int n = 0;
	
	while ( nombre[ n ] != '\0' ) {
		n++;
	}
	
	nombre[ 0 ] = toupper( nombre[ 0 ] );
	for ( int i = 0; i <= n; i++ ) {
		if ( nombre[ i ] == ' ' ) {
			nombre[ i + 1 ] = toupper( nombre[ i + 1 ] );	
		}
	}
}

int main() {
	char nombre[] = "caceres patrimonio de la humanidad";
	mayuscula( nombre );
	cout << nombre;
	return 0;
}
