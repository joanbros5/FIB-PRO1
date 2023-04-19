#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	//copiem entrada a un vector
	vector<int> v(n);
	for (int i = 0; i < n; ++i) cin >> v[i];

	//Recorrem el vector per comptabilitzar quants son iguals al l'ultim
	int compt = 0;
	for (int i = 0; i < n - 1; ++i) {
		if (v[i] == v[n - 1]) ++compt;
	}
	cout << compt << endl;
}
