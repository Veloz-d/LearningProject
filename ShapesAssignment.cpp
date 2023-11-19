#include <stdio.h>
#include <math.h>

using namespace std;

int main() {
    const int Radius = 10;
    const int Diameter = Radius * 2;

    for (int X = 0; X <= Diameter; X++) {
        for (int Y = 0; Y <= Diameter; Y++) {
            int Distance = sqrt(pow(X - Radius, 2) + pow(Y - Radius, 2));

            if (Distance < Radius) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}