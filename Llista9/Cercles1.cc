#include <iostream>
#include <cmath>
using namespace std;

struct Punt {
	double x, y;
};

double distancia(const Punt& a, const Punt& b) {
	double dist = 0;
    double base = a.x - b.x;;
    double altura = a.y - b.y;
    dist = sqrt((base * base) + (altura * altura));
    return dist;
}

struct Cercle { Punt centre;
	double radi;
};

void desplaca(Punt& p1, const Punt& p2) {
	p1.x += p2.x;
	p1.y += p2.y;
}

void escala(Cercle& c, double esc) {
	c.radi *= esc;
}

void desplaca(Cercle& c, const Punt& p) {
	desplaca(c.centre, p);
}

bool es_interior(const Punt& p, const Cercle& c) {
	return distancia(p, c.centre) < c.radi;
}

int main() {
	Cercle cercle;
	Punt p;
	double esc;
	bool interior;
	cin >> cercle.centre.x >> cercle.centre.y >> cercle.radi;
	cin >> esc;
	cin >> p.x >> p.y;
	cout << "Cercle normal: " << cercle.centre.x << " " << cercle.centre.y;
	cout << " " << cercle.radi << endl;
	
	escala(cercle, esc);
	cout << "Cercle escalat: " << cercle.centre.x << " " << cercle.centre.y;
	cout << " " << cercle.radi << endl;
	
	desplaca(cercle, p);
	cout << "Cercle desplaCat: " << cercle.centre.x << " " << cercle.centre.y;
	cout << " " << cercle.radi << endl;
	
	interior = es_interior(p, cercle);
	cout << "Es interior: " << interior << endl;
}
