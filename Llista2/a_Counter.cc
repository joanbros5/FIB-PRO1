#include <iostream>
using namespace std;

int main() {
	int compt = 0;
    char c;
    cin >> c;
    while (c != '.') {
		if (c == 'a') ++compt;
		cin >> c;
	}
	cout << compt << endl;
}
