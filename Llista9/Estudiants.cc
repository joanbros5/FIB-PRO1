#include <iostream>
#include <vector>
using namespace std;

struct Estudiant { 
	int dni; 
	string nom; 
	double nota; // La nota és un valor entre 0 i 10 (-1 == NP)
	bool repetidor; 
};

void informacio(const vector<Estudiant>& es, 
				double& min, double& max, 
				double& mitj) {
	min = 11.;
	max = 0.;
	mitj = 0;
	
	int mitj_count = 0;
	for (int i = 0; i < es.size(); ++i) {
		if (es[i].nota != -1 and not es[i].repetidor) {
			if (es[i].nota < min) min = es[i].nota;
			if (es[i].nota > max) max = es[i].nota;
			mitj += es[i].nota;
			++mitj_count;
		}	
	}
	if (mitj_count <= 0) min = max = mitj = -1;
	else mitj /= mitj_count;
}

int main() {
	
	int a;
	string b;
	double c;
	bool d;
	
	double min, max, mitj;
	vector <Estudiant> es;
	while (cin >> a >> b >> c >> d) {
		Estudiant est;
		est.dni = a;
		est.nom = b;
		est.nota = c;
		est.repetidor = d;
		es.push_back(est);
	}
	informacio(es, min, max, mitj);
	cout << "Minima nota: " << min << endl;
	cout << "Maxima nota: " << max << endl;
	cout << "Mitjana: " << mitj << endl;
}
