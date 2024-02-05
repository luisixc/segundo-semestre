
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float n;
	float r;
	float x;
	cout << "Ingrese un numero para obtener la tabla de raiz" << endl;
	cin >> n;
	for (x=1;x<=10;x++) {
		r = sqrtf(n);
		cout << "La raz cuadrade de " << n << " es: " << r << endl;
		n = n+1;
	}
	return 0;
}

