
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float cud[10];
	int i;
	float num[10];
	cout << "=== Cuadrado de los 10 primeros números enteros ===" << endl;
	for (i=1;i<=10;i++) {
		num[i-1] = i;
		cud[i-1] = pow(i,2);
	}
	for (i=1;i<=10;i++) {
		cout << "Para el numero: " << num[i-1] << " es: " << cud[i-1] << endl;
	}
	return 0;
}
