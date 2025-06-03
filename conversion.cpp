#include <iostream>
using namespace std;

int main(){

    float cm, m, pu, pi, km, mi;
    int opcion;
    
    cout << "Seleccione una opcion" << endl;
    cout << "1. cm a pulgadas" << endl;
    cout << "2. metros a pies" << endl;
    cout << "3. km a millas" << endl;
    cin >> opcion;

    switch (opcion){
        case 1: 
            cout << "Digite la cantidad en cm a convertir en pulgadas" << endl;
            cin >> cm;
            pu = cm/2.54;
            cout << "Su conversion de cm a pulgadas es: " << pu << endl;  
            break;

        case 2:
            cout << "Digite la cantidad en metros a convertir en pies" << endl;
            cin >> m;
            pi = m*3.281;
            cout << "Su conversion de metros a pies es: " << pi << endl;
            break;
        
        case 3:
            cout << "Digite la cantidad de kilometros a convertir en millas" << endl;
            cin >> km;
            mi = km/1.609;
            cout << "Su conversion de km a millas es: " << mi << endl;
            break;
    }

    return 0;
}