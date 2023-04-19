#include <iostream>
using namespace std;

int main() {
    int n, count = 1, result = 0;
    cin >> n;
    while (count <= n) {
			result = result + count * count;
			count = count + 1;
		}
	cout << result << endl;
}
