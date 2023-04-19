#include <iostream>
#include <vector>
using namespace std;

//funcio per a llegir (es molt util)
vector<int> llegir(int n) {
	vector<int> v(n);
	for (int i = 0; i < n; ++i) cin >> v[i];
	return v;
}

//funcio per a escriure (es molt util)
void escriure(const vector<int>& v) {
	int n = v.size();
	for (int i = 0; i < n; ++i) cout << v[i] << " ";
	cout << endl;
}

//funcio de concatenacio (el que ens demanen)
vector<int> concatenacio(const vector<int>& v1, 
						 const vector<int>& v2) {
	int n = v1.size();
	int m = v2.size();
	vector<int> v3(n + m);
	
	for (int i = 0; i < n; ++i) v3[i] = v1[i];
	for (int i = 0; i < m; ++i) v3[n + i] = v2[i];
	
	return v3;
}

//MAIN
int main() {
	int n,m;
	cin >> n;
	vector<int> v1 = llegir(n);
	
	cin >> m;
	vector<int> v2 = llegir(m);
	
	vector<int> v3 = concatenacio(v1,  v2);
	escriure(v3);
}
