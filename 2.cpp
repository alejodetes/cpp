/******************************************************************************

Un establecimiento de comidas rápida ofrece hamburguesas sencillas, dobles y todo 
terreno, las cuales tienen un costo de $12.000, $18.000 y $22.000 respectivamente. La 
empresa acepta también tarjetas de crédito con un cargo de 5% sobre la compra. 
Suponiendo que los clientes adquieren sólo un tipo de hamburguesa. Determinar cuánto 
debe pagar una persona por N hamburguesas

*******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

char tipo, Ta;
int C;
float P,ST,T;

int main() 
{
    cout << "Ingrese tipo de hamburguesa (S-sencilla, D-doble, T-todo terreno): ";
    cin >> tipo;
    tipo = toupper(tipo);
    
    cout << "Ingrese cantidad: ";
    cin >> C;
    
    cout << "Paga con tarjeta? (S/N): ";
    cin >> Ta;
    Ta = toupper(Ta);

  
    switch(tipo) 
    {
        case 'S':
            P = 12000;
            break;
        case 'D':
            P = 18000;
            break;
        case 'T':
            P = 22000;
            break;
        default:
            cout << "Tipo no valido" << endl;
            return 1;
    }

     ST = P * C;
   
    if (Ta == 'S') 
    {
        T = ST * 1.05; 
    } 
    else 
    {
       T = ST;
    }

    cout << fixed << setprecision(2);
    cout << "Total a pagar: $" << T << endl;

    return 0;
}