#include <iostream>
using namespace std;

struct Racional { 
	int num, den;
};

Racional racional(int n, int d) {
	Racional Q;
	
	Q.num = n;
	if (n == 0) Q.den = 1;
	else {
		if (d < 0) Q.den = d * -1;
		else Q.den = d;
	}

	return Q;
}

int main() {
	int n, d;
	Racional rac;
	while (cin >> n >> d) {
		rac = racional(n, d);
		cout << rac.num << endl;
		cout << "----" << endl;
		cout << rac.den << endl;
	}
}
