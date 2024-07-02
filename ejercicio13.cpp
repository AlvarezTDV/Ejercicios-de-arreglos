#include <iostream>
using namespace std;

//FUNCION PARA COPIAR UNA CADENA A OTRA
void mistrcpy(char str1[], char str2[]) {
    int i = 0;
    while (str2[i] != '\0') {
        str1[i] = str2[i];
        i++;
    }
    str1[i] = '\0';
}

int main() {
    char str1[20];
    char str2[] = "Hola, mundo!";

    mistrcpy(str1, str2);

    cout << "str1: " << str1 << endl;

    return 0;
}
