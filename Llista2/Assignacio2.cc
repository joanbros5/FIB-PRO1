#include <iostream>
using namespace std;

int main() {
	int d, n, t, counter = 0;
	cin >> d >> n >> t;
	for (t = t; t > 0; --t) {
		int a;
		cin >> a;
		n = n + a - d;
		if (n > 0) ++counter;
	}
	cout << counter << endl;
}
