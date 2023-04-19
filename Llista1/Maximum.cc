#include <iostream>
using namespace std;

int main() {
    int x, y, z, max;
    cin >> x >> y >> z;
    if (x >= y) {
        max = x;
        }
    else {
        max = y;
        }
    if (z > max) {
        max = z;
        }
    cout << max << endl;
}
