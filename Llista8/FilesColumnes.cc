#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Matriu;

//FUNCIONS

//PRE: n >= 0, m >= 0
//POST: retorna una matriu n x m llegida del cin
Matriu llegir(int n, int m) {
	Matriu mat(n, Fila(m));
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) cin >> mat[i][j];
	}
	return mat;
}

//PRE: -
//POST: escriu per pantalla la fila i de la matriu mat
void escriure_fila(const Matriu& mat, int i) {
	int n = mat.size();
	if (n > 0 and i >= 0 and i < n) {
		int m = mat[i].size();
		for (int j = 0; j < m; ++j) cout << " " << mat[i][j];
		cout << endl;
	}
}

//PRE: -
//POST: escriu per pantalla la columna j de la matriu mat
void escriure_columna(const Matriu& mat, int j) {
	int n = mat.size();
		for (int i = 0; i < n; ++i) {
			int m = mat[i].size();
			if (j >= 0 and j < m) cout << " " << mat[i][j];
			else cout << "- ";
	}
	cout << endl;
}



//MAIN
int main() {
	int n, m;
	cin >> n >> m;
	Matriu mat = llegir(n, m);
	
	string consulta;
	while (cin >> consulta) {
		if (consulta == "fila") {
			int i;
			cin >> i;
			cout << consulta << " " << i << ":";
			escriure_fila(mat, i - 1);
		}
		
		else if (consulta == "columna") {
			int j;
			cin >> j;
			cout << consulta << " " << j << ":";
			escriure_columna(mat, j - 1);	
		}
		
		else {
			int i, j;
			cin >> i >> j;
			cout << consulta << " " << i << " " << j << ": ";
			cout << mat[i-1][j-1] << endl;
		}
	}
}
