#include <iostream>
using namespace std;

					// Es capicua
bool es_capicua(int n) { 
	int revn = 0, x = n;		// n al reves, copia de n (per operar)
	while (x > 0) {
		revn = revn * 10 + x % 10;		// Afegim ultim digit a nReves
		x = x / 10;						// Treiem ultim digit de nCopia
	}
	return revn == n;
}

					// Main
int main() {
	int n;
	while (cin >> n) cout << es_capicua(n) << endl;
}
