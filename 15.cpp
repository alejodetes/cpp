/******************************************************************************

Calcular y escribir la producción de café (en sacos) dada por la siguiente función:

                   {5000 x˄2 - 1000x + 3000  0<x<=2 }
            F(x) = {1000 x˄2 + 20.000x       2<x<=6 }  donde x es el tiempo en meses
                   {40.000                   x<6    }
                   
*******************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 float X,P;
int main() {
    
    cout << "Ingrese tiempo en meses: ";
    cin >> X;

  
    if (X <= 0) 
    {
        cout << "Tiempo no valido" << endl;
        return 1;
    } 
    else if (X <= 2) 
    {
        P = 5000 * pow(X, 2) - 1000 * X + 3000;
    }
    else if (X <= 6)
    {
        P = 1000 * pow(X, 2) + 20000 * X;
    }
    else 
    {
        P = 40000;
    }

    cout << fixed << setprecision(2);
    cout << "Produccion de cafe: " << P << "sacos" << endl;

    return 0;
}