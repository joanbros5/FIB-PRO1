#include <iostream>
using namespace std;

int engreixa(int x) {
	if (x < 10) return x;
	else {
		int y = engreixa(x / 10);
		return (y * 10) + max(x % 10, y % 10);
	}
}

int main() {
	int n;
	while (cin >> n) cout << engreixa(n) << endl;
}
