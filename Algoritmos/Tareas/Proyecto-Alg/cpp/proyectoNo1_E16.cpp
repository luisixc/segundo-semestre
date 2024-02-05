
#include<iostream>
using namespace std;

int main() {
	int ano;
	int a�o;
	cout << "Ingresa un a�o" << endl;
	cin >> ano;
	if (ano%4==0) {
		if (ano%100==0) {
			if (ano%400==0) {
				cout << "El a�o " << ano << " es bisiesto" << endl;
			} else {
				cout << "El a�o " << ano << " no es bisiesto" << endl;
			}
		} else {
			cout << "El a�o " << ano << " es bisiesto" << endl;
		}
	} else {
		cout << "El a�o " << ano << " no bisiesto" << endl;
	}
	return 0;
}

