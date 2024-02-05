
#include<iostream>
using namespace std;

int main() {
	int impares;
	int n;
	cout << "Ingresa el total de numeros: " << endl;
	cin >> n;
	impares = 0;
	while (n>0) {
		if (n%2 !=0) {
			impares = impares+n;
		} 
		n = n-1;
	}
	cout << "La suma de los numeros imapres es: " << impares << endl;
	return 0;
}

