#include <iostream>
using namespace std;

//FUNCION QUE COMPARA LAS CADENAS
int mistrcmp(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] > str2[i]) {
            return 1; // str1 es mayor que str2
        } else if (str1[i] < str2[i]) {
            return -1; // str2 es mayor que str1
        }
        i++;
    }

    // Si se llegó al final de una de las cadenas, comparar longitudes
    if (str1[i] == '\0' && str2[i] != '\0') {
        return -1; // str2 es mayor que str1
    } else if (str1[i] != '\0' && str2[i] == '\0') {
        return 1; // str1 es mayor que str2
    }

    return 0; // Las cadenas son iguales
}

int main() {
    char str1[] = "Hola";
    char str2[] = "Hola";

    int result = mistrcmp(str1, str2);
    cout << "Comparacion: " << result << endl;
    cout << "Son iguales" << endl;

    char str3[] = "Hola";
    char str4[] = "Holb";

    result = mistrcmp(str3, str4);
    cout << "Comparacion: " << result << endl;
    cout << "str4 es mayor que str3" << endl;

    char str5[] = "Holb";
    char str6[] = "Hola";

    result = mistrcmp(str5, str6);
    cout << "Comparacion: " << result << endl;
    cout << "str5 es mayor que str6" << endl;

    return 0;
}
