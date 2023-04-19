#include <iostream>
using namespace std;

int suma_digits(int x) {
	if (x < 10) return x;
	else return suma_digits(x / 10) + (x % 10);
}

int reduccio_digits(int x) {
	int suma = suma_digits(x);
	if (suma < 10) return suma;
	else return reduccio_digits(suma);
}

int main() {
	int n;
	while (cin >> n) cout << reduccio_digits(n) << endl;
}
