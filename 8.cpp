/******************************************************************************
      
       . Determinar si la solución de una ecuación de segundo grado 
            (ax2 + bx + c = 0) usando la fórmula cuadrática es: 
                            - Única
                            - Tiene dos valores reales diferentes
                            - Valores complejos.
                            
*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;
float A, B, C,D;
int main() {

	cout << "Ingrese A: ";
	cin >> A;
	cout << "Ingrese B: ";
	cin >> B;
	cout << "Ingrese C: ";
	cin >> C;

	D = pow(B, 2) - 4*A*C;

	if (D > 0)
	{
		cout << "Tiene dos valores reales diferentes" << endl;
	}
	else if (D == 0)
	{
		cout << "Una unica solucion " << endl;
	}
	else
	{
		cout << "Soluciones complejas" << endl;
	}

	return 0;
}