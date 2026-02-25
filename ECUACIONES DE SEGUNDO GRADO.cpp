// practico3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//AUTOR ; KAAIYA ALARCON 
// CLASE:Ecuacion cuadratica


#include <iostream>
#include <cmath>
using namespace std;

double discriminante(int a, int b, int c);
double unica(int a, int b);
double reales(int a, int b, double d, double& x2);
double imaginaria(int a, int b, double d, double& x2);

int main()
{
    int a, b, c;
    double d, x1, x2;

    cout << "Sistema de ecuacion cuadratica ax^2 + bx + c = 0" << endl;

    cout << "Coloca el coeficiente de segundo grado (a): " << endl;
    cin >> a;

    cout << "Coloca el coeficiente de primer grado (b): " << endl;
    cin >> b;

    cout << "Coloca el termino independiente (c): ";
    cin >> c;

    d = discriminante(a, b, c);

    if (d == 0) {
        cout << "La solucion unica es: ";
        cout << unica(a, b) << endl;
    }
    else
        if (d > 0) {
            x1 = reales(a, b, d, x2);
            cout << "Las soluciones reales son:" << endl;
            cout << "X1: " << x1 << endl;
            cout << "X2: " << x2 << endl;
        }
        else {
            x1 = imaginaria(a, b, d, x2);
            cout << "Las soluciones imaginarias son:" << endl;
            cout << "X1: " << x1 << " + " << x2 << "i" << endl;
            cout << "X2: " << x1 << " - " << x2 << "i" << endl;
        }

    return 0;
}

double discriminante(int a, int b, int c) {
    return (b * b) - 4 * a * c;
}

double unica(int a, int b) {
    return -b / (2 * a);
}

double reales(int a, int b, double d, double& x2)
{
    double x1;
    x1 = (-b + sqrt(d)) / (2 * a);
    x2 = (-b - sqrt(d)) / (2 * a);
    return x1;
}

double imaginaria(int a, int b, double d, double& x2)
{
    double parteReal = -b / (2 * a);
    x2 = sqrt(-d) / (2 * a);
    return parteReal;
}