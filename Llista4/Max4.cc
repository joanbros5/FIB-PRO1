#include <iostream>
using namespace std;

int max2 (int a, int b) {
	if (a >= b) return a;
	else return b;
}

int max4(int a, int b, int c, int d) {
	return max2(max2(a, b), max2(c, d));
}

int main() {
	int x, y, z, t;
	while (cin >> x >> y >> z >> t) {
		cout << max4(x, y, z, t) << endl;
	}
}
