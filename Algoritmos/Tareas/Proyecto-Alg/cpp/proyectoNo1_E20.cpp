
#include<iostream>
using namespace std;

int main() {
	float n1;
	float n2;
	float op;
	float prod;
	float res;
	float sum;
	cout << "Selecione una opci�n: " << endl;
	cout << "1) Suma" << endl;
	cout << "2) Producto" << endl;
	cout << "3) Residuo" << endl;
	cout << "-----------------------" << endl;
	cin >> op;
	if (op==1) {
		cout << "Ingrese el primero numero" << endl;
		cin >> n1;
		cout << "Ingrese el segundo numero" << endl;
		cin >> n2;
		sum = n1+n2;
		cout << "La suma de: " << n1 << " y: " << n2 << " es: " << sum << endl;
	} else {
		if (op==2) {
			cout << "Ingrese el primero numero" << endl;
			cin >> n1;
			cout << "Ingrese el segundo numero" << endl;
			cin >> n2;
			prod = n1*n2;
			cout << "El producto de: " << n1 << " y: " << n2 << " es: " << prod << endl;
		} else {
			if (op==3) {
				cout << "Ingrese el primero numero" << endl;
				cin >> n1;
				cout << "Ingrese el segundo numero" << endl;
				cin >> n2;
				res = n1/n2;
				cout << "El residuo de: " << n1 << " y: " << n2 << " es: " << res << endl;
			}
		}
	}
	return 0;
}

