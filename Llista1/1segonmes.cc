#include <iostream>
using namespace std;

int main() {
	int h, min, seg;
	cin >> h >> min >> seg;
	++seg;
	if (seg >= 60) {
		++min;
		seg = 0;
	}
	if (min >= 60) {
		++h;
		min = 0;
	}
	if (h >= 24 ) {
		h = 0;
	}
	if (h < 10) cout << "0" << h << ":";
	else cout << h << ":";
	if (min < 10) cout << "0" << min << ":";
	else cout << min << ":";
	if (seg < 10) cout << "0" << seg << endl;
	else cout << seg << endl;
}
