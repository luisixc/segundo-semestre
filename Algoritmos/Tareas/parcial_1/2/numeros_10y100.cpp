#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int n;
	int s;
	cout << "Escriba un numero" << endl;
	cin >> n;
	if (n<0) {
		s = 0;
		while (n<0) {
			s = s+(n%10);
			n = int(n/10);
		}
		cout << s << endl;
	} else {
		cout << "Es positivo" << endl;
	}
	return 0;
}

