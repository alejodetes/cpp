/******************************************************************************

     Diseñe un algoritmo que dadas las edades de tres personas, las compare y 
        determine quiénes son contemporáneos. (Tienen la misma edad).
    
*******************************************************************************/

#include <iostream>
using namespace std;

int E1,E2,E3,A,B,C;
int main()
{
    cout<<"Ingrese la edad de la persona 1: "<<endl;
    cin >> E1;
    cout<<"Ingrese la edad de la persona 2: "<<endl;
    cin >> E2;
    cout<<"Ingrese la edad de la persona 3: "<<endl;
    cin >> E3;
    
    if (E1 == E2 && E2 == E3)
    {
        cout<<"Los 3 son contemporáneos" <<endl;
    }
    else if (E1 == E2)
    {
       cout<<"persona 1 y persona 2 son contemporáneos" <<endl;
    }
    else if (E1 == E3)
    {
        cout<<"persona 1 y persona 3 son contemporáneos" <<endl;
    }
    else if (E2 == E3)
    {
        cout<<"persona 3 y persona 2 son contemporáneos" <<endl;
    }
    else
    {
        cout<<"no son contemporáneos ninguna de las 3 personas" <<endl;
    }
    
   
    return 0;
}