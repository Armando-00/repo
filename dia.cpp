#include <iostream>
using namespace std;

int main() {
    int dia;

    cout << "ingresa un numero del 1 al 7: ";
    cin >> dia;

    if (dia >= 1 && dia <= 5) {
        cout << "es un dia laboral" << endl;
    }

    else if (dia == 6 || dia == 7) {
        cout << "es fin de semana" << endl;
    }

    else {
        cout << "numero invalido" << endl;
    }

    return 0;
}