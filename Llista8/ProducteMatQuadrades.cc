#include <iostream>
#include <vector>
//#include "utils.cc"
using namespace std;

typedef vector< vector<int> > Matriu;

//PRE: a i b son matrius quadrades de la mateixa mida
Matriu producte(const Matriu& a, const Matriu& b) {
	int n = a.size();
	Matriu prod(n, vector<int>(n, 0));		//matriu inicialitzada a 0
	
	for (int i = 0; i < n; ++i) {			//recorregut complet per
		for (int j = 0; j < n; ++j)  {		//matriu resultant producte
			
			//calcul necessari per emplenar l'element prod[i][j]
			for (int k = 0; k < n; ++k) {
				prod[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	return prod;
}

//int main() {
	//int n;
	//cin >> n;
	//Matriu a = llegir(n, n);
	//Matriu b = llegir(n, n);
	//Matriu c = producte(a, b);
	//escriure(c);
//}
