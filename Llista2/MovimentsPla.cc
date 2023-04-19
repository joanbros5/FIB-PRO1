#include <iostream>
using namespace std;

int main() {
	char ordre;
	int x= 0, y = 0;
	while (cin >> ordre) {
		if (ordre == 'n') --y;
		else if (ordre == 's') ++y;
		else if (ordre == 'e') ++x;
		else if (ordre == 'o') --x;
	}
	cout << "(" << x << ", " << y << ")" << endl;
}
