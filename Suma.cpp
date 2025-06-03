#include <iostream>
using namespace std;

int main (){

    int numero, suma = 0;   
    
    cout << "Ingrese un numero entero" << endl;
    cin >> numero;

    for (int i = 1; i <= numero; i++ ){ 
    suma += i;
  }
    cout << "Su numero es: " << numero << " la suma de sus numeros es: " << suma << endl;

    return 0;

}