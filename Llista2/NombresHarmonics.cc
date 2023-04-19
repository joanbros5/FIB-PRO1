#include <iostream>
using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.precision(4);
	
	double n, counter = 1;
	double result = 1;
	cin >> n;
	if (n == 0) {
		cout << result * 0 << endl;
	}
	else { 
		while (counter < n) {
		counter = counter + 1;
		result = result + (1 / counter);
		}
		cout << result << endl;
	}
}
