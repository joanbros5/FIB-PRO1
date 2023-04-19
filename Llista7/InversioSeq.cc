#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		if (n > 0) {
			//copiem entrada a un vector
			vector<int> v(n);
			for (int i = 0; i < n; ++i) cin >> v[i];
	
			//imprimim la sequencia invertida
			for (int i = n - 1; i > 0; --i) cout << v[i] << " ";
			cout << v[0] << endl;
		}
		else cout << endl;
	}
}
