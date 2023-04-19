#include <iostream>
#include <vector>
using namespace std;

//PRE: u i v tenen la mateixa mida
double producte_escalar(const vector<double>& u, 
						const vector<double>& v) {
	double suma = 0;
	int n = u.size();		//u.size() == v.size() per la PREcondicio
	for (int i = 0; i < n; ++i) suma += u[i] * v[i];
	return suma;
}

//Donat n >= 0 retorna un vector de n elements del cin
vector<double> llegir(int n) {
	vector<double> v(n);
	for (int i = 0; i < n; ++i) cin >> v[i];
	return v;
}

int main() {
	int n;
	cin >> n;
	vector<double> v1 = llegir(n);
	vector<double> v2 = llegir(n);
	cout << producte_escalar(v1, v2) << endl;
}
