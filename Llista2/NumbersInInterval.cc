#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a > b) {
        cout << endl;
    }
    else if (a != b and a < b) {
        cout << a;
        while (a < b) {
        a = a + 1;
        cout << "," << a;
        }
        cout << endl;
    }
    else if (a == b) {
        cout << a << endl;
        }
}
