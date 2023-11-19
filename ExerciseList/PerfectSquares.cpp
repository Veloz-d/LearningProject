#include <math.h>
#include <iostream>

using namespace std;

int main() {
    int i, n;
    cin >> i;

    n = fmod(sqrt(i), 1);

    if (n == 0) {
        cout << "é";
    } else {
        cout << "não é";
    }
}