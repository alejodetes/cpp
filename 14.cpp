/******************************************************************************

Calcular y escribir el impuesto a pagar por un vehículo, dado su modelo y valor comercial, 
así:
- Para precio menor o igual a $25.000.000 y modelo menor a 2014 el valor del
impuesto es igual al 1.5% del valor comercial
- Para precio entre $25.000.000 y $50.000.000 y modelo superior o igual a 2014 el
valor del impuesto es igual al 2% del valor comercial
- Para precio mayor a $50.000.000 en cualquier modelo el valor del impuesto es igual 
al 3.5% del valor comercial.

*******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int M;
float V,I;
    
int main() 
{
    cout << "Ingrese modelo del vehiculo: ";
    cin >> M;
    cout << "Ingrese valor comercial: ";
    cin >> V;

    if (V <= 25000000 && M < 2014) 
    {
        I = V * 0.015;
    } 
    else if (V > 25000000 && V <= 50000000 && M >= 2014) 
    {
        I = V * 0.02;
    } 
    else if (V > 50000000) 
    {
        I = V * 0.035;
    } 
    else 
    {
        I = 0;
    }
    cout << fixed << setprecision(2);
    cout << "Impuesto a pagar: $" << I << endl;

    return 0;
}