#include <iostream>
using namespace std;

int main() {
    float peso;
    int costo;

    cout << "ingresa el peso del paquete en kg: ";
    cin >> peso;

    if (peso <= 5) {
        costo = 5;
    }
    else if (peso <= 10) {
        costo = 10;
    }
    else {
        costo = 15;
    }

    cout << "el costo de envio es: $" << costo << endl;

    return 0;
}