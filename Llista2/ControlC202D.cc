#include <iostream>
using namespace std;

int main() {
	int a, b, suma = 0;
	while (cin >> a >> b) {
		int copiA;
		if (a == b) suma = a * a * a;
		else if (a < b)	{
			for (copiA = a; copiA <= b; ++copiA) {
				suma += copiA * copiA * copiA;
			}
		}
	cout << "suma dels cubs entre " << a << " i " << b << ": " << suma;
	cout << endl;
	suma = 0;
	}
}
