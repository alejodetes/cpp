/***********************************************************************************

                Leer tres números y organizarlos en orden ascendente

************************************************************************************/

#include <iostream>
using namespace std;
float A,B,C,Mn,Md,My;
int main()
{
    
    cout<<"Ingrese primer número: "<<endl;
    cin >> A;
    cout<<"Ingrese segundo número: "<<endl;
    cin >> B;
    cout<<"Ingrese tercer número: "<<endl;
    cin >> C;
    
    if (A <= B and A <= C)
    {
    Mn = A;
        if (B >= C)
        {
            Md = C;
            My = B;
        }
        else
        {
            Md = B;
            My = C;
        }
    }
    else if (B <= A and B <= C)
    {
    Mn = B;
        if (A >= C)
        {
            Md = C;
            My = A;
        }
        else
        {
            Md = A;
            My = C;
        }
    }
    else 
    {
    Mn = C;
        if (A >= B)
        {
            Md = B;
            My = A;
        }
        else
        {
            Md = A;
            My = B;
        }
    }
    cout<<"El orden de los numeros de menor a mayor seria"<<endl;
    cout<< Mn<<endl;
    cout<< Md<<endl;
    cout<< My<<endl;
    return 0;
}
