#include <iostream>
using namespace std;

int main() {
	int X, counter = 0, a;
	cin >> X;
	while (cin >> a) {
		if (a == 0) ++counter;
		else if (a % X == 0) ++counter;
	}
	cout << counter << endl;
}
