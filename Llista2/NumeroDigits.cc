#include <iostream>
using namespace std;

int main() {
	int n, compt = 0;
	cin >> n;
	cout << "El nombre de digits de " << n << " es ";
	if (n == 0) {
		cout << "1." << endl;
	}
	else {
		while (n > 0) {
		n = n / 10;
		++compt;
		}
		cout << compt << "." << endl;
	} 	
}
