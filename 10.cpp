/**********************************************************************************************

Leer el precio de un artículo, calcular e imprimir el precio final, teniendo en cuenta que:
- Si el Precio es menor o igual a $30.000, no tiene descuento
- Si el Precio es superior a $30.000 y menor a $60.000, tiene un descuento del 10%
- Si el precio es mayor o igual a $60.000, tiene un descuento del 20%

**********************************************************************************************/

#include <iostream>
using namespace std;

float P_F,P;

int main()
{
    
    cout << "Ingrese precio del articulo: ";
    cin >> P;

    if (P <= 30000) 
    {
        P_F = P;
    } 
    else if (P < 60000) 
    {
        P_F = P * 0.9;
    } 
    else 
    {
        P_F = P * 0.8;
    }
    cout << "Precio final: " << P_F << endl;

    return 0;
}