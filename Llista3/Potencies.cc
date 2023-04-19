#include <iostream>
using namespace std;

int main() {
	int N, exponent, resultat;
	while (cin >> N >> exponent) {
		resultat = N;
		if (N == 0 and exponent != 0) cout << "0" << endl;
		else if (exponent == 0) cout << "1" << endl;
		else {
			for (exponent = exponent; exponent > 1; --exponent) {
				resultat *= N;
			}
			cout << resultat << endl;
		}
	}
}
