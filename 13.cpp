/******************************************************************************

. Calcular y escribir el valor a pagar por el servicio de energC-a elC)ctrica, conociendo el
estrato del sector de la ciudad y el consumo mensual de kilowatts, asC-:
                Estrato     Cargo BC!sico     Valor Kilowatts
                1 o 2         $5.000               $0
                  3           $8.000               $55
                  4           $12.000              $92
                  5           $20.000              $105
                  6           $35.000              $135

*******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;
int E,Cb;
float C,v_kw,T;
    
int main() {
    
    cout << "Ingrese estrato (1-6): ";
    cin >> E;
    cout << "Ingrese consumo en kW: ";
    cin >> C;

    
    
    switch(E) 
    {
        case 1:
        case 2:
            Cb = 5000;
            v_kw = 0;
            break;
        case 3:
            Cb = 8000;
            v_kw = 55;
            break;
        case 4:
            Cb = 12000;
            v_kw = 92;
            break;
        case 5:
            Cb = 20000;
            v_kw = 105;
            break;
        case 6:
            Cb = 35000;
            v_kw = 135;
            break;
        default:
            cout << "Estrato no valido" << endl;
            return 1;
    }
    T = Cb + (C * v_kw);
    cout << fixed << setprecision(2);
    cout << "Valor a pagar: $" << T << endl;

    return 0;
}