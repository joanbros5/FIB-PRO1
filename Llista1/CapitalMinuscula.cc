#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    
    if (c >= 'a' and c <= 'z') {
        int dist = c - 'a';
        cout << char('A' + dist) << endl;
    } 
    else {
        int dist = c - 'A';
        cout << char('a' + dist) << endl;
    }
}
