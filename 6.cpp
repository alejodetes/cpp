/******************************************************************************

 5. Dado los lados de un triángulo, clasificarlo en función de sus lados: 
                     Equilátero (los tres lados iguales)
                     Isósceles (dos lados iguales)
                     Escaleno (los tres lados diferentes

*******************************************************************************/

#include <iostream>
using namespace std;

float  A,B,C;
int main()
{
    cout<<"Ingrese lado 1: "<<endl;
    cin >> A;
    cout<<"Ingrese lado  2: "<<endl;
    cin >> B;
    cout<<"Ingrese lado  3: "<<endl;
    cin >> C;
    
    if (A + B > C and A + C > B and B + C > A)
    {
        if (A==B&&B==C)
        {
        cout<<"el triangulo es Equilátero"<<endl;
        }
        else if (A==B or B==C)
        {
        cout<<"el triangulo es Isósceles"<<endl;
        }
        else 
        {
        cout<<"el triangulo es Escaleno"<<endl;
        }
    }    
    else
    {
        cout<<"el triangulo NO ES VALIDO"<<endl;
    }
    
    return 0;
}