#include <iostream>
using namespace std;

int factorial(int n) {
	int prod = 1;
	while (n > 1) {
		prod = prod * n;
		n = n - 1;
	}
	return prod;
}

int main() {
	int n;
	while (cin >> n) cout << factorial(n) << endl;
}
