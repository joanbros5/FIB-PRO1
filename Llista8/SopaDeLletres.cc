#include <iostream>
#include <vector>
using namespace std;

typedef vector<char> Fila;
typedef vector< Fila > Sopa;

//PRE: n >= 0, m >= 0
//POST: retorna una matriu n x m llegida del cin
Sopa llegir(int n, int m) {
	Sopa mat(n, Fila(m));
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) cin >> mat[i][j];
	}
	return mat;
}

//PRE: mat es una matriu qualsevol
//POST: escriu la matriu pel cout
void escriure(const Sopa& mat) {
	int n = mat.size();			//nombre de files
	for (int i = 0; i < n; ++i) {
		int m = mat[0].size();		//nombre de columnes
		if (m > 0) {
			cout << mat[i][0];
			for (int j = 1; j < m; ++j) cout << " " << mat[i][j];
		}
		cout << endl;
	}
}

int main() {
	int l, n, m;
	cin >> l >> n >> m;
	
	//lectura de les paraules, les guardem en un vector "mots"
	vector<string> mots(l);
	for (int i = 0; i < l; ++i) cin >> mots[i];
	
	//lectura de la sopa
	Sopa sopa = llegir(n, m);
	
	//copiem la sopa inicial per anar marcant les majúscules
	Sopa sopa2 = sopa;

	//busquem les paraules de mots(l)
	
	....
	
	//escriure la sopa modificada
	escriure(sopa2);
}
