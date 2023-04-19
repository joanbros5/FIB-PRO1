#include <iostream>
using namespace std;

int main() {
	int Nx, counter, Ny;
	while (cin >> Nx) {
		Ny = Nx;
		counter = 1;
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
}
