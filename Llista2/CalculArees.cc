#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.precision(6);
	
	int n, compt = 0;
	cin >> n;
	while (compt < n) {
		string fig;
		cin >> fig;
		if (fig == "rectangle") {
			double x, y;
			cin >> x >> y;
			cout << x * y << endl;
		}
		else if (fig == "circle") {
			double r;
			cin >> r;
			cout << M_PI * r * r << endl;
		}
		++compt;
	}
}
