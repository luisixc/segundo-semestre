
#include<iostream>
using namespace std;
int main() {
	int n;
	int x;
	cout << "Ingresa un n�mero: " << endl;
	cin >> n;
	x = 1;
	while (x<=n) {
		if (x%3==0) {
			cout << x << endl;
		}
		x = x+1;
	}
	return 0;
}

