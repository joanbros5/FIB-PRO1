#include <iostream>
using namespace std;

int main() {
	int N, suma = 0;
	cin >> N;
	cout << N << " ";
	if (N < 10) {
		if (N % 2 != 0) cout << "NO ";
		cout << "ES TXATXI" << endl;
	}
	else {
		while (N > 0) {
			suma += N % 10;
			N = N / 100;
		}
		if (suma % 2 != 0) cout << "NO ";
		cout << "ES TXATXI" << endl;
	}
}
