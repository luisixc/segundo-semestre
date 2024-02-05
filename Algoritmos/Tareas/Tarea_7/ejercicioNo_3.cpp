
#include<iostream>
using namespace std;

int main() {
	int a;
	int x1;
	int x2;
	cout << "Ingrese el valor de su varible 1: " << endl;
	cin >> x1;
	cout << "Ingrese el valor de su varible 2: " << endl;
	cin >> x2;
	a = x1;
	x1 = x2;
	x2 = a;
	cout << "El nuevo valor de la variable 1 es: " << x1 << endl;
	cout << "El nuevo valor de la variable 2 es: " << x2 << endl;
	return 0;
}

