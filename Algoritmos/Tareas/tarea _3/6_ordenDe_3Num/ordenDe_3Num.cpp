#include<iostream>
using namespace std;

int main() {
	float a;
	float b;
	float c;
	float n;
	float x;
	cout << "Escribe 3 numeros" << endl;
	for (x=1;x<=3;x++) {
		cin >> n;
		if (x==1) {
			a = n;
		}
		if (x==2) {
			if (a<n) {
				b = a;
				a = n;
			} else {
				b = n;
			}
		}
		if (x==3) {
			if (a<n) {
				c = b;
				b = a;
				a = n;
			} else {
				if (b<n) {
					c = b;
					b = n;
				} else {
					c = n;
				}
			}
		}
	}
	cout << c << endl;
	cout << b << endl;
	cout << a << endl;
	return 0;
}

