
#include<iostream>
using namespace std;
int main() {
	float cn;
	float cp;
	float i;
	float mn;
	float mp;
	float num;
	float sn;
	float sp;
	sp = 0;
	sn = 0;
	cp = 0;
	cn = 0;
	for (i=1;i<=100;i++) {
		cout << "Ingresar un numero: " << endl;
		cin >> num;
		if (num>=0) {
			cp = cp+1;
			sp = sp+num;
		} else {
			cn = cn+1;
			sn = sn+num;
		}
	}
	mp = sp/cp;
	mn = sn/cn;
	cout << "La media de los positivos es: " << mp << endl;
	cout << "La media de los negativos es: " << mn << endl;
	return 0;
}

