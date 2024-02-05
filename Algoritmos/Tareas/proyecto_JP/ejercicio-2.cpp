
#include<iostream>
using namespace std;

int main() {
	int f;
	int n;
	int r;
	n = 0;
	cout << "Escriba un numero: " << endl;
	cin >> n;
	cout << "  * ";
	for (r=1;r<=n;r++) {
		if (r>=1 && r<=9) {
			cout << "  ";
		}
		if (r>=10 && r<=99) {
			cout << " ";
		}
		cout << r << " ";
	}
	cout << "" << endl;
	for (f=1;f<=n;f++) {
		if (f>=1 && f<=9) {
			cout << "  ";
		}
		if (f>=10 && f<=99) {
			cout << " ";
		}
		cout << f << " ";
		for (r=1;r<=n;r++) {
			if (f*r>=1 && f*r<=9) {
				cout << "  ";
			}
			if (f*r>=10 && f*r<=99) {
				cout << " ";
			}
			cout << f*r << " ";
		}
		cout << "" << endl;
	}
	return 0;
}

