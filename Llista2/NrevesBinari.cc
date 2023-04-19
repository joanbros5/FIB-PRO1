#include <iostream>
using namespace std;

int main() {
	int n, revn = 0;		//numero, Nreves
	cin >> n;
	int ncopia = n;
	while (ncopia > 0) {
		revn = revn * 10 + ncopia % 2;
		if (revn == 0) cout << 0;
		ncopia = ncopia / 2;
	}
	cout << revn << endl;
}
