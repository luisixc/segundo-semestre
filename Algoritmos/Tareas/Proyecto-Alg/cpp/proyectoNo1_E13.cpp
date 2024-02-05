
#include<iostream>
using namespace std;

int main() {
	float c;
	float i;
	float m;
	float n;
	float t;
	float x;
	cout << "Ingrese la cantidad de numeros: " << endl;
	cin >> x;
	n = 0;
	m = 0;
	t = 0;
	c = 0;
	while (c<x) {
		c = c+1;
		cout << "Ingresae el numero: " << c << endl;
		cin >> i;
		if (i>n) {
			n = i;
		}
		if (c==1) {
			m = i;
		} else {
			if (m>i) {
				m = i;
			}
		}
		t = t+i;
	}
	cout << "=== Resultados ===" << endl;
	cout << "El numero maximo es: " << n << endl;
	cout << "En numero minimo es: " << m << endl;
	cout << "El promedio es: " << t/x << endl;
	return 0;
}

