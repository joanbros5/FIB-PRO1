#include <iostream>
using namespace std;

int main() {
	int N, counter = 1;
	cin >> N;
	for (N = N; N > 0; --N) {
		for (int i = 1; i <= counter; ++i) {
			cout << "*";
		}
		cout << endl;
		++counter;
	}
}
