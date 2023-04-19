#include <iostream>
using namespace std;

int main() {
    double n;
    cin >> n;
    int under = n;
    int top = n;
    double dec = n - under;
    int round = dec * 10;
    if (round > 0) {
        top = n + 1;
    }
    if (round >= 5) {
        round = under + 1;
    }
    else {
        round = under;
    }
    cout << under << " " << top << " " << round << endl;
}
