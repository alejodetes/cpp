/******************************************************************************

DiseC1e un algoritmo que lea un nC:mero entero de 3 cifras, y forme el mayor nC:mero
posible con las cifras del nC:mero ingresado. El nC:mero formado debe tener el mismo signo
que el nC:mero ingresado

*******************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int N,S,Mn,cifras[3];

int main()
{
	cout << "Ingrese un numero de 3 cifras: ";
	cin >> N;

	S = (N < 0) ? -1 : 1;
	N = abs(N);

	if (N < 100 || N > 999) {
		cout << "El numero no tiene 3 cifras" << endl;
		return 1;
	}

	cifras[0] = N / 100;        
	cifras[1] = (N / 10) % 10;  
	cifras[2] = N % 10;          

	sort(cifras, cifras + 3, greater<int>());

	int Mn = (cifras[0] * 100 + cifras[1] * 10 + cifras[2]) * S;
	cout << "Mayor numero posible: " << Mn << endl;

	return 0;
}