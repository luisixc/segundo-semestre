#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "Ingrese un numero entero: " << endl;
	cin >> n;
	while (n!=1) {
		if ((n%2)==0) {
			n = n/2;
		} else {
			n = (n*3)+1;
		}
		cout << n << endl;
	}
	return 0;
}
