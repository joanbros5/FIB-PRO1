#include <iostream>
using namespace std;

int main(){
	int x, y, suma = 0;
	cin >> x >> y;
	for (int i = 0; i < x; ++i) {
		for (int j = 0; j < y; ++j) {
			char c;
			cin >> c;
			if ((i % 2 == 0 and j % 2 == 0) or (i % 2 != 0 and j % 2 != 0)) {
				suma += c - '0';
			}
		}
	}
	cout << suma << endl;
}
