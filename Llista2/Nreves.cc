#include <iostream>
using namespace std;

int main() {
	int n, revn = 0;		//numero, copia, Nreves
	cin >> n;
	int ncopia = n;
	while (ncopia > 0) {
		revn = revn * 10 + ncopia % 10;
		if (revn == 0) cout << 0;
		ncopia = ncopia / 10;
	}
	cout << revn << endl;
}
