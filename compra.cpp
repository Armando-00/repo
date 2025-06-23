#include <iostream>
using namespace std;

int main() {
    float monto, total;

    cout << "ingresa el total de su compra: ";
    cin >> monto;

    if (monto > 100) {
        total = monto - (monto * 0.10);
        cout << "total a pagar (con 10 porciento de descuento): $" << total << endl;
    } else {
        total = monto;
        cout << "total a pagar (sin descuento, su compra es menor a 100): $" << total << endl;
    }

    return 0;
}