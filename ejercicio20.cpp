#include <iostream>
#include <string>
using namespace std;

// FUNCION PARA CALCULAR EL PROMEDIO ANUAL DE VENTAS
double calcularPromedioVentas(double ventas[], int numMeses) {
    double sumaVentas = 0.0;
    for (int i = 0; i < numMeses; i++) {
        sumaVentas += ventas[i];
    }
    return sumaVentas / numMeses;
}

// FUNCION PARA CALCULAR EL PORCENTAJE DE MESES QUE CUMPLIERON CON LOS NIVELES DE VENTAS
void calcularPorcentajeVentas(double ventas[], double promedioVentas, int numMeses, int& minimo, int& regular, int& excelente) {
    for (int i = 0; i < numMeses; i++) {
        double porcentajeVenta = ventas[i] / promedioVentas;
        if (porcentajeVenta < 0.4) {
            minimo++;
        } else if (porcentajeVenta >= 0.4 && porcentajeVenta <= 0.75) {
            regular++;
        } else {
            excelente++;
        }
    }
}

// FUNCION PARA MOSTRAR LOS RESULTADOS
void mostrarResultados(double promedioVentas, int minimo, int regular, int excelente, string meses[], double ventas[]) {
    cout << "Valor de la venta mensual promedio: " << promedioVentas << endl;
    cout << "Porcentaje de meses que cumplieron con los niveles de ventas:" << endl;
    cout << "  Minimo: " << minimo << " meses (" << static_cast<double>(minimo) / 12 << ")" << endl;
    cout << "  Regular: " << regular << " meses (" << static_cast<double>(regular) / 12 << ")" << endl;
    cout << "  Excelente: " << excelente << " meses (" << static_cast<double>(excelente) / 12 << ")" << endl;

    cout << "Meses con ventas excelentes:" << endl;
    for (int i = 0; i < 12; i++) {
        double porcentajeVenta = ventas[i] / promedioVentas;
        if (porcentajeVenta > 0.75) {
            cout << "  " << meses[i] << endl;
        }
    }
}

int main() {
    const int NUM_MESES = 12;
    string meses[NUM_MESES] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    double ventas[NUM_MESES];

    cout << "Ingrese las ventas mensuales de 2020:" << endl;
    for (int i = 0; i < NUM_MESES; i++) {
        cout << "Venta de " << meses[i] << ": ";
        cin >> ventas[i];
    }

    double promedioVentas = calcularPromedioVentas(ventas, NUM_MESES);

    int minimo = 0, regular = 0, excelente = 0;
    calcularPorcentajeVentas(ventas, promedioVentas, NUM_MESES, minimo, regular, excelente);

    mostrarResultados(promedioVentas, minimo, regular, excelente, meses, ventas);

    return 0;
}
