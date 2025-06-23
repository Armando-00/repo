#include <iostream>
using namespace std;

int main() {
    int nota;

    cout << "ingrese su nota del examen de fundamentos de programacion (0-100)" <<endl;
    cin >> nota;

    if (nota >= 60) {
        cout << "Usted ha aprobado" << endl;
    } 
    else {
        cout << "Usted ha reprobado" << endl;
    }
    return 0;
}