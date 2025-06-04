/*****************************************************************************************

En una empresa, el aumento salarial de los empleados se va a determinar de acuerdo con
la siguiente tabla.
                      Salario Actual Aumento (%)
                     Minimo a $950.000 IPC + 2.0%
                   $950.000 a $1.650.000 IPC + 1.5%
                  $1.650.000 a $2.000.000 IPC + 1.0%
                        MC!s de $2.000.000 IPC

Escribir un algoritmo que solicite el salario actual del empleado, calcule y escriba el
nuevo salario (IPC: C
ndice de precio al consumidor1)

********************************************************************************************/
#include <iostream>
using namespace std;
  float Sl,ipc,A,N_Sl;
int main() {
    
    ipc = 0.05; 
    
    cout << "Ingrese salario actual: ";
    cin >> Sl;

    if (Sl < 950000) 
    {
        A = ipc + 0.02;
    } 
    else if (Sl < 1650000) 
    {
        A = ipc + 0.015;
    }
    else if (Sl < 2000000)
    {
        A = ipc + 0.01;
    } 
    else 
    {
        A = ipc;
    }
    N_Sl = Sl * (1 + A);
    cout << "Nuevo salario: " << N_Sl << endl;

    return 0;
}
