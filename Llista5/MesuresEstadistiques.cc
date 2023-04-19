#include <iostream>
using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.precision(4);
	
	int n, m;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> m;
		for (int j = 0; j < m; ++j) {
			int mitj_comptador = 2;
			double x1, x2, min, max, mitj;
			if (cin >> x1) {
				min = x1;
				max = x1;
				mitj = x1;
				while (cin >> x2) {
					if (x2 >= x1) {
						max = x2;
						min = x1;
					}
					if (x2 <= x1) {
						max = x1;
						min = x2;
					}
					mitj = (x1 + x2) / mitj_comptador;
					++mitj_comptador;
					x1 = x2;
				}
			}
			cout << min << " " << max << " " << mitj << endl;
		}
	} 
}
