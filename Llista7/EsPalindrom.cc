#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool es_palindrom(const string& s) {
	int n = s.length(), i = 0;
	bool palindrom = true;
	while (i < n and palindrom) {
		if (s[i] != s[n - i - 1]) palindrom =false;
		++i;
	}
	return palindrom;
}

int main() {
	string s;
	while (cin >> s) cout << es_palindrom(s) << endl;
}
