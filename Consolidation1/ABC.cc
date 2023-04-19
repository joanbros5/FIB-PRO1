#include <iostream>
using namespace std;

void lletrasortida(char lletra, int lA, int lB, int lC) {
	if (lletra == 'A') cout << lA;
	else if (lletra == 'B') cout << lB;
	else cout << lC;
}

int main() {
	int x, y, z;
	char L1, L2, L3;
	
	cin >> x >> y >> z >> L1 >> L2 >> L3;
	
	int A = 0, B = 0, C = 0;
	
	if (x > y and x > z) {
		C = x;
		if (y > z) {
			B = y;
			A = z;
		} else {
			B = z;
			A = y;
		}
	}
	if (y > x and y > z) {
		C = y;
		if (x > z) {
			B = x;
			A = z;
		} else {
			B = z;
			A = x;
		}
	}
	if (z > x and z > y) {
		C = z;
		if (x > y) {
			B = x;
			A = y;
		} else {
			B = y;
			A = x;
		}
	}
	
	lletrasortida(L1, A, B, C);
	cout << " ";
	lletrasortida(L2, A, B ,C);
	cout << " ";
	lletrasortida(L3, A, B, C);
	cout << endl;
	
}
