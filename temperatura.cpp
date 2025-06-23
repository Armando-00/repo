#include <iostream>
using namespace std;

int main() {
    float temp;

    cout << "ingresa la temperatura en grados celsius: ";
    cin >> temp;

    if (temp < 15) {
        cout << "esta frio" << endl;
    }
    else if (temp <= 25) {
        cout << "esta templado" << endl;
    }
    else {
        cout << "esta caliente" << endl;
    }

    return 0;
}