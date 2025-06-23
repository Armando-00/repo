#include <iostream>
using namespace std;

int main() {
    float promedio;
    int faltas;

    cout << "ingresa tu promedio" << endl;;
    cin >> promedio;

    cout << "ingrese su numero de faltas" << endl;
    cin >> faltas;

    if (promedio >= 85 && faltas < 3) {
        cout << "felicidades, tienes beca" << endl;
    } else {
        cout << "no cumple los requisitos para beca" << endl;
    }

    return 0;
}