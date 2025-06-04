/******************************************************************************
                                                                                                                 
. Una empresa distribuidora de huevos requiere generar una factura para calcular el precio 
de un pedido. La siguiente tabla presenta la clasificación del producto:
                            Tipo Valor Unitario
                                    J $380
                                    A $350
                                    B $320
                                    C $300
La factura debe incluir la cantidad solicitada, el tipo del producto, el valor unitario y el 
valor total. 
- Si la cantidad es menor de 500, no tiene servicio de transporte y su valor es 0, ni 
descuento.
- Si la cantidad esta entre 500 y 5000, no tiene servicio de transporte pero si 
descuento del 5% sobre el costo.
- Si la cantidad es superior a 5.000 e inferior a 10.000 tiene un descuento del 7.5% 
y debe hacer un pago adicional por servicio de transporte de $25.000
- Si la cantidad es mayor o igual a 10.000, el descuento es del 8.5% y el transporte 
tendrá un sobrecosto del 5% sobre valor del transporte que es de 25000.


*******************************************************************************/

#include <iostream>
#include <map>
#include <iomanip>
using namespace std;

  char tipo;
  int C,ValorU;
  float valorSinD,T,D,total;
  
int main() {
  
    
    cout << "Ingrese tipo de huevo (J, A, B, C): ";
    cin >> Th;
    cout << "Ingrese cantidad: ";
    cin >> C;
    Th = toupper(Th);
    map<char, int> precios = {{'J', 380}, {'A', 350}, {'B', 320}, {'C', 300}};
    
    if(precios.find(Th) == precios.end()) {
        cout << "Tipo de huevo no valido!" << endl;
        return 1;
    }

     ValorU = precios[Th];
     valorSinD = C * ValorU;
     D = 0;
     T = 0;

    switch(C) {
        case 0 ... 499: 
            break; 
        
        case 500 ... 5000: 
            D = valorSinD * 0.05;
            break;
        
        case 5001 ... 9999:
            D = valorSinD * 0.075;
            T = 25000;
            break;
        
        default: 
            if(C >= 10000) {
                D = valorSinD * 0.085;
                T = 25000 * 1.05;
            }
            break;
    }

    total = valorSinD - D + T;

    cout << fixed << setprecision(2);
    cout << "\nFACTURA" << endl;
    cout << "Cantidad: " << C << endl;
    cout << "Tipo: " << tipo << endl;
    cout << "Valor unitario: $" << ValorU << endl;
    cout << "Descuento: $" << D << endl;
    cout << "Transporte: $" << T << endl;
    cout << "TOTAL A PAGAR: $" << total << endl;

    return 0;
}