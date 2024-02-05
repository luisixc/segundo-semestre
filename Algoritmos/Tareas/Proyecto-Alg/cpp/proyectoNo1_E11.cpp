
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int centenas;
	int decenas;
	string nc[10];
	string nd[10];
	string nu[10];
	float numero;
	bool sepuedeconvertir;
	int unidades;
	cout << "Ingrese un n�mero entre 1 y 1000" << endl;
	cin >> numero;
	sepuedeconvertir = true;
	if (numero==0) {
		cout << "No existe ning�n s�mbolo para representar el 0" << endl;
		sepuedeconvertir = false;
	}
	if (numero!=int(numero)) {
		cout << "El n�mero debe ser entero" << endl;
		sepuedeconvertir = false;
	}
	if (numero>1000) {
		cout << "Muy alto" << endl;
		sepuedeconvertir = false;
	}
	if (numero<0) {
		cout << "Debe ser positivo" << endl;
		sepuedeconvertir = false;
	}
	if (sepuedeconvertir) {
		if (numero==1000) {
			cout << "M" << endl;
		} else {
			nu[0] = "";
			nu[1] = "I";
			nu[2] = "II";
			nu[3] = "III";
			nu[4] = "IV";
			nu[5] = "V";
			nu[6] = "VI";
			nu[7] = "VII";
			nu[8] = "VIII";
			nu[9] = "IX";
			nd[0] = "";
			nd[1] = "X";
			nd[2] = "XX";
			nd[3] = "XXX";
			nd[4] = "XL";
			nd[5] = "L";
			nd[6] = "LX";
			nd[7] = "LXX";
			nd[8] = "LXXX";
			nd[9] = "XC";
			nc[0] = "";
			nc[1] = "C";
			nc[2] = "CC";
			nc[3] = "CCC";
			nc[4] = "CD";
			nc[5] = "D";
			nc[6] = "DC";
			nc[7] = "DCC";
			nc[8] = "DCCC";
			nc[9] = "CM";
			centenas = int(numero/100)%10;
			decenas = int(numero/10)%10;
			unidades = numero%10;
			cout << nc[centenas] << nd[decenas] << nu[unidades] << endl;
		}
	}
	return 0;
}

