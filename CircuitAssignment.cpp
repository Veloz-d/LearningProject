#include <iostream>
#include <stdio.h>
#include <string>
#include <map>

using namespace std;

void getInputValue(map<char, float>* targetMap) {
    char valueName;
    float value;
    cin >> valueName >> value;

    (*targetMap)[valueName] = value;
}

int main() {
    while (true) {
        int mode;
        cin >> mode;

        if (mode == 0) {
            break;
        }

        std::map<char, float> circuitMap;

        getInputValue(&circuitMap);
        getInputValue(&circuitMap);

        switch (mode) {
            case 1:
                circuitMap['V'] = circuitMap['R'] * circuitMap['I'];
            break;
            case 2:
                circuitMap['I'] = circuitMap['V'] / circuitMap['R'];
            break;
            case 3:
                circuitMap['R'] = circuitMap['V'] / circuitMap['I'];
            break;  
        }

        printf("I %.2f R %.2f V %.2f\n", circuitMap['I'], circuitMap['R'], circuitMap['V']);
    }

    return 0;
}
