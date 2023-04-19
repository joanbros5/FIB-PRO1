#include <iostream>
using namespace std;

void figura(int n) {
	if (n == 1) cout << "*" << endl;		//cas base
	else {
		//figura superior
		figura(n-1);
		
		//linia central
		for (int i = 0; i < n; ++i) cout << "*";
		cout << endl;
		
		//figura inferior
		figura (n-1);
	}
}

int main() {
	int n;
	while (cin >> n) figura(n);
}
