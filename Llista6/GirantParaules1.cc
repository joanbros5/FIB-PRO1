#include <iostream>
using namespace std;

void invers() {
	string mot;
	if (cin >> mot) {
		invers();
		cout << mot << endl;
	}
}

int main() {
	invers();
}
