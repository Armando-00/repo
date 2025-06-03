#include <iostream>
using namespace std;

int main (){

    int tarifa, consumo;
    cout << "Ingrese su consumo en kwh" << endl;
    cin >> consumo;

       if (consumo < 100){
            tarifa = consumo*0.16;
            cout << "Tarifa baja, debera pagar: " << tarifa << endl;
        }
        else if (consumo >= 100 <= 200){
            tarifa = consumo*0.16;
            cout << "Tarifa media, debera pagar: " << tarifa << endl;
        }
        else if (consumo > 200){
            tarifa = consumo*0.16;
            cout << "Tarifa alta, debera pagar: " << tarifa << endl;
        }




    return 0;
}