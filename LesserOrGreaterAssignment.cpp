#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int lesser = 1000000, greater = 0;
    for (int i = 0; i < 10; i++)  {
        int currentValue;
        cin >> currentValue;

        if (currentValue < lesser) {
            lesser = currentValue;
        }
        if (currentValue > greater) {
            greater = currentValue;
        }
    }

    printf("Maior: %d\nMenor: %d", greater, lesser);
}