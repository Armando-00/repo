#include <iostream>
using namespace std;

int main() {
    int numero;
    
    cout << "Ingrese un numero" << endl;
    cin >> numero;

    if (numero % 2 == 0){
        cout << "Su numero es par" << endl;
    } else {
        cout << "Su numero es impar" << endl;
    }

    return 0;
}