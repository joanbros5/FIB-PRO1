#include <iostream>
using namespace std;

int main() {
    int a1, a2, b1, b2, f1, f2;
    cin >> a1 >> a2 >> b1 >> b2;
    if (a1 > b1) {
        f1 = a1;
    }
    else {
        f1 = b1;
    }
    if (a2 > b2) {
        f2 = b2;
    }
    else {
        f2 = a2;
    }
    if (f1 > f2) {
        cout << "[]" << endl;
    }
    else {
        cout << "[" << f1 << "," << f2 << "]" << endl;
    }
}
