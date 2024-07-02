#include <iostream>
#include <string.h>
using namespace std;

//FUNCION PARA INGRESAR NOMBRES
void nombresIngresados( char nombres[][30], int cantidadNombres ) {
	for ( int i = 0; i < cantidadNombres; i++ ) {
		cout << "Ingrese un nombre: ";
		cin >> nombres[i];
	}
}

//FUNCION PARA COMPARAR LOS NOMBRES
void comparar( char nombres[][30], int cantidadNombres ) {
	char aux[30];
	for ( int i = 0; i < cantidadNombres; i++ ) {
		for ( int j = 0; j < cantidadNombres; j++ ) {
			if ( strcmp( nombres[j], nombres[j + 1] ) > 0 ){
				strcpy( aux, nombres[j]);
				strcpy( nombres[j], nombres[j + 1] );
				strcpy( nombres[j + 1], aux );
			}
		}
	}
	
	for ( int i = 0; i <= cantidadNombres; i++ ) {
		cout << nombres[i] << endl;
	}
}

int main() {
	int cantidadNombres;
	cout << "Ingrese la cantidad de nombres que va a ingresar: ";
	cin >> cantidadNombres;
	char nombres[cantidadNombres][30];
	nombresIngresados( nombres, cantidadNombres ); 
	cout << "Nombres ordenados: ";
	comparar( nombres, cantidadNombres );
	return 0;
}
