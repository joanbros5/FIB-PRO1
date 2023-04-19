#include <iostream>
using namespace std;

int avaluar() {
	char op;
	cin >> op;
	
	//cas base, un digit
	if (op >= '0' and op <= '9') return op - '0';
	else {
		//cas recursiu, expressio prefix, es una operacio
		int x = avaluar();
		int y = avaluar();
		
		if (op == '+') return x + y;
		else if (op == '-') return x - y;
		else return x * y;
	}
}

int main() {
	cout << avaluar() << endl;
}
