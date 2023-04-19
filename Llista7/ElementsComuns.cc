#include <iostream>
#include <vector>
using namespace std;

int elements_comuns (const vector<int>& X, const vector<int>& Y) {
	int i = 0, j = 0, compt = 0;
	while (i < int(X.size()) and j < int(Y.size())) {
		if (X[i] < Y[j]) ++i;
		else if (X[i] > Y[j]) ++j;
		else {
			++compt;
			++i;
			++j;
		}
	}
	return compt;
}
