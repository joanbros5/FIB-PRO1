#include <vector>
using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Matriu;

//PRE: n >= 0, m >= 0
//POST: retorna una matriu n x m llegida del cin
Matriu llegir(int n, int m) {
	Matriu mat(n, Fila(m));
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) cin >> mat[i][j];
	}
	return mat;
}

//PRE: mat es una matriu qualsevol
//POST: escriu la matriu pel cout
void escriure(const Matriu& mat) {
	int n = mat.size();			//nombre de files
	if (n > 0) {
		for (int i = 0; i < n; ++i) {
			int m = mat[0].size();		//nombre de columnes
			for (int j = 0; j < m; ++j) cout << mat[i][j] << " ";
			cout << endl;
		}
	}
}

//PRE: -
//POST: escriu per pantalla la fila i de la matriu mat
void escriure_fila(const Matriu& mat, int i) {
	int n = mat.size();
	if (n > 0 and i >= 0 and i < n) {
		int m = mat[i].size();
		for (int j = 0; j < m; ++j) cout << mat[i][j] << " ";
		cout << endl;
	}
}

//PRE: -
//POST: escriu per pantalla la columna j de la matriu mat
void escriure_columna(const Matriu& mat, int j) {
	int n = mat.size();
		for (int i = 0; i < n; ++i) {
			int m = mat[i].size();
			if (j >= 0 and j < m) cout << mat[i][j] << " ";
			else cout << "- ";
	}
	cout << endl;
}
