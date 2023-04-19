#include <iostream>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		cout << "divisors de " << n << ":";
		
		// 1a PART: divisors mes petits que arrel(n)
		int d = 1;
		while (d * d < n) {
			if (n % d == 0) cout << " " << d;
			++d;
		}
		if (d * d > n) --d;	// No ens oblidem de arrel(n)

		//2a PART: divisors despres arrel(n)
		while (d >= 1) {
			if (n % d == 0) cout << " " << n/d;
			--d;
		}
		cout << endl;
	}
}
