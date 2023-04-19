#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.precision(6);
	
	int n, compt = 0;
	cin >> n;           //nº de figures
	while (compt < n) {
		string fig;		//tipus de figura
		cin >> fig;
		if (fig == "rectangle") {
			double b, h;
			cin >> b >> h;			//llegim base i alçada
			cout << b * h << endl;
		} 
		else if (fig == "cercle") {
			double r;
			cin >> r;				//llegim el radi
			cout << M_PI * r * r << endl;
		}
		++compt;
	}
}
