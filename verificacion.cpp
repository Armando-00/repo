#include <iostream>
#include <string>
using namespace std;

int main() {
    string usuario, clave;

    cout << "ingrese su usuario" << endl;
    cin >> usuario;

    cout << "ingrese su clave" << endl;
    cin >> clave;

    if (usuario == "fortnite" && clave == "hola123") {
        cout << "acceso permitido" << endl;
    }
    else {
        cout << "usuario o clave incorrectos" << endl;
    }

    return 0;
}