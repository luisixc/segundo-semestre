#include<iostream>
using namespace std;
int main() {
	int c;
	int i;
	int n;
	int x;
	cout << "Ingrese un numero" << endl;
	cin >> n;
	i = 0;
	while (n>0) {
		i = i+1;
		x = 1;
		c = 0;
		while (x<=i) {
			if (i%x==0) {
				c = c+1;
			}
			x = x+1;
		}
		if (c==2) {
			cout << "El numero " << i << " es primo" << endl;
			n = n-1;
		}
	}
	return 0;
}

