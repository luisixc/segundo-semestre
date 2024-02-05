
#include<iostream>
using namespace std;
int main() {
	int a;
	int b;
	int n;
	int total;
	int x;
	cout << "Ingrese el total de numeros: " << endl;
	cin >> total;
	x = 1;
	while (x<=total) {
		cout << "Ingrese un numero: " << endl;
		cin >> n;
		if (x==1) {
			a = n;
			b = n;
		} else {
			if (n>a) {
				a = n;
			} else {
				if (n<b) {
					b = n;
				}
			}
		}
		x = x+1;
	}
	cout << "El numero mayor es: " << a << endl;
	cout << "El numero menor es: " << b << endl;
	return 0;
}

