/*****************************************************************************************

Escribir un programa que asigne una calificación literal conociendo la calificación 
cuantitativa, basada en la siguiente tabla de puntuaciones:
Calificación Valoración
0.0 – 3.0 Deficiente
3.0 – 4.0 Aceptable
4.0 – 4.5 Sobresaliente
4.5 – 5.0 Excelente
Para puntuaciones que no se encuentren dentro del rango de 0.0 a 5.0 escribir el mensaje 
“DATO ERRADO”.

*****************************************************************************************/

#include <iostream>
using namespace std;

 float N;
 
int main() {
    
    cout << "Ingrese calificacion : ";
    cin >> N;

    if (N < 0 or N > 5) 
    {
        cout << "DATO NO VALIDO" << endl;
    } 
    else if (N <= 3) 
    {
        cout << "Deficiente" << endl;
    } 
    else if (N <= 4)
    {
        cout << "Aceptable" << endl;
    } 
    else if (N <= 4.5) 
    {
        cout << "Sobresaliente" << endl;
    } 
    else 
    {
        cout << "Excelente" << endl;
    }

    return 0;
}