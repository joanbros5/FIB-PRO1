#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;							//nombre sequencies
	for (int i = 0; i < n; ++i) {		//recorregut sequencies
		int compt = 0;					//comptador de creixents
		int x1, x2;						//finestra de 2 elements
		if (cin >> x1 and x1 != 0) {
			while (cin >> x2 and x2 != 0) {
				if (x2 > x1) ++compt;
				x1 = x2;
			}
		}
		cout << compt << endl;
	}
}
