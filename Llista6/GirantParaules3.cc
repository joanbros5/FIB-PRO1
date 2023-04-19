#include <iostream>
using namespace std;

void invers() {
	int x;
	cin >> x;
	string mot;
	for (int i = 0; i < x; ++i) {
		if (cin >> mot) {
			invers();
			cout << mot << endl;
		}
	}
}

int main() {
	invers();
}
