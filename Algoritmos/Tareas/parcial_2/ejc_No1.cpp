
#include<iostream>
using namespace std;
#define SIN_TIPO string

int main() {
	float cont;
	float i;
	SIN_TIPO k;
	float n;
	SIN_TIPO nk;
	cout << "Ingresa el tama�o del vector: " << endl;
	cin >> n;
	cout << "Defina el numero a buscar: " << endl;
	cin >> k;
	for (i=0;i<=n-1;i++) {
		cout << "Ingrese un n�mero:" << endl;
		cin >> nk;
		if ((nk==k)) {
			cont = cont+1;
		}
	}
	cout << "El n�mero: " << k << " aparece: " << cont << " veces" << endl;
	return 0;
}

