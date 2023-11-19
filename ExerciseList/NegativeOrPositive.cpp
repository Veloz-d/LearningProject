#include <iostream>

using namespace std;

int main () {
    int i;
    int n = 0;
    cin >> i;
    
    if (i < 0) {
        n = -1;
    } else if (i > 0) {
        n = 1;
    } else {
        n = 0;
    }

    cout << n;
}