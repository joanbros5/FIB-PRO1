#include <iostream>
using namespace std;

int main() {
	int Nx, counter = 1, Ny;
	cin >> Nx;
	Ny = Nx;
	while (counter <= Nx) {
		int barra = 1;
		while (barra < Ny) {
			cout << "+";
			++barra;
		}
		if (barra == Ny) cout << "/";
		while (barra < Nx) {
			cout << "*";
			++barra;
		}
		cout << endl;
		--Ny;
		++counter;
	}
}
