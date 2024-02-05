#include<iostream>
using namespace std;

int main() {
	int c;
	int i;
	int s;
	i = 1;
	c = 1;
	while (c<=10) {
		if (i%2==0) {
			cout << i << endl;
			s = s+i;
			c = c+1;
		}
		i = i+1;
	}
	cout << "La suma de los 10 numero naatures es: " << s << endl;
	return 0;
}

