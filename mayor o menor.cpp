#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout << "Ingresa el primer numero" << endl;
    cin >> n1;
    cout << "Ingresa el segundo numero" << endl;
    cin >> n2;

    if (n1 > n2) {
        cout << "Su numero mayor es: " << n1 << endl;
        cout << "Su numero menor es: " << n2 << endl;
    }  
    else if (n2 > n1) {
        cout << "Su numero mayor es: " << n2 << endl;
        cout << "Su numero menor es: " << n1 << endl;
         }
     else  {
        cout << "Sus numeros son iguales: " << n1 << ", " << n2 << endl; 
    } 
    return 0;
}