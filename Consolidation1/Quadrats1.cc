#include <iostream>
using namespace std;

int main(){
	int nx, ny, n;
	bool first = true;
	while (cin >> n) {
		nx = n;
		ny = n;
		if (not first) cout << endl;
		for (int i = 0; i < nx; ++i) {
			for (int j = 0; j < ny; ++j) {
				cout << n;
			}
			cout << endl;
		}
		first = false;
	}
}
