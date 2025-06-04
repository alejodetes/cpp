/***********************************************************************************

Leer un número digitado por teclado y determinar si el número tiene 1, 2 o 3 dígitos.

************************************************************************************/

#include <iostream>
using namespace std;

int N;

int main()
{
   cout<<"ingresa un numero"<<endl;
   cin>>N;
    
    if (N<10)
    {
    cout<<"El número tiene 1 dígitos"<<endl;
    }
    else if (N<100)
    {
    cout<<"El número tiene 2 dígitos"<<endl;
    }
    else if (N<1000)
    {
    cout<<"El número tiene 3 dígitos"<<endl;
    }
    else 
    {
    cout<<"El número tiene mas de 3 dígitos"<<endl;
    }
    return 0;
}