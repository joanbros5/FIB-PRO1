#include <iostream>
using namespace std;

int main() {
	int base, N, suma;
	cin >> base;
	while (cin >> N) {
		cout << N << ": ";
		suma = 0;
		if (N == 0) cout << suma << endl;
		else {
			for (N = N; N > 0; N /= base) suma += N % base;
			cout << suma << endl;
		}
	}
}
