#include <iostream>
using namespace std;

int main() {
	int N, Ncopia, sumadigits = 0;
	while (cin >> N) {
		Ncopia = N;
		sumadigits = 0;
		cout << "La suma dels digits de " << N << " es ";
		for (Ncopia = Ncopia; Ncopia > 0; Ncopia /= 10) {
			sumadigits += Ncopia % 10;
		}
		cout << sumadigits << "." << endl;
	}
}
