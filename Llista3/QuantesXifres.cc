#include <iostream>
using namespace std;

int main() {
	int base, N, counter;
	while (cin >> base >> N) {
		counter = 0;
		for (N = N; N > 0; N /= base) ++counter;
		cout << counter << endl;
	}
}
