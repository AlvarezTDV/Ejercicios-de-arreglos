#include <iostream>
using namespace std;

//FUNCION QUE AGREGA STR2 AL FINAL DE STR1
void mistrcat(char str1[], char str2[]) {
    int len1 = 0;
    while (str1[len1]!= '\0') {
        len1++;
    }

    int len2 = 0;
    while (str2[len2]!= '\0') {
        len2++;
    }

    int i = 0;
    while (i < len2) {
        str1[len1 + i] = str2[i];
        i++;
    }
    str1[len1 + i] = '\0';
}

int main() {
    char str1[20] = "Hola, ";
    char str2[] = "mundo!";

    mistrcat(str1, str2);

    cout << "str1: " << str1 << endl;

    return 0;
}
