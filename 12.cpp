/************************************************************************************************
 
 Una aseguradora debe determinar los valores del seguro de vida de sus clientes. Si la 
tarifa básica es de $25.500 por cada año de vida, calcular el valor a pagar teniendo en 
cuenta las siguientes condiciones de edad del afiliado:
- Si se digita como edad el valor menor o igual a 0 o mayor de 90, escribir “Dato Errado”.
- Si la edad es menor de 40 años, paga el 70% de la tarifa básica
- Si la edad está entre 40 y 60 años, paga el 85% de la tarifa básica
- Si la edad es mayor de 60 y menor de 70 años, paga la tarifa plena
- Si la edad está entre 70 y 85 años, paga un sobrecosto de 50% de la tarifa plena
- Personas con edad superior a 85 años, no se ofrece seguro


************************************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int E;
float Tb,Tf;

int main() 

{
     Tb = 25500;
    
    cout << "Ingrese edad del afiliado: ";
    cin >> E;

    if (E <= 0 or E > 90) 
    {
        cout << "Dato Errado" << endl;
    } 
    else if (E > 85) 
    {
        cout << "No se ofrece seguro" << endl;
    } else {
        
        if (E < 40) 
        {
            Tf = Tb * 0.7;
        } 
        else if (E <= 60)
        {
            Tf = Tb * 0.85;
        } 
        else if (E < 70) 
        {
            Tf = Tb;
        } 
        else if (E <= 85) 
        {
            Tf = Tb * 1.5;
        }
        
        cout << fixed << setprecision(2);
        cout << "Valor a pagar: $" << Tf * E << endl;
    }

    return 0;
}