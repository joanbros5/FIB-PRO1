#include <iostream>
using namespace std;

int main() {
	char cosa;
	cin >> cosa;
	if ((cosa >= 65 and cosa <= 90) or (cosa >= 97 and cosa <= 122)) {
		cout << "lletra" << endl;
	}
	else if (cosa >= 48 and cosa <= 57) cout << "digit" << endl;
	else cout << "res" << endl;
}
