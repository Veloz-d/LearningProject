#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int password, maxAttempts;
    int i = 0;

    cin >> password >> maxAttempts;

    while (true) {
        int attempt;
        cin >> attempt;

        if (attempt == password) {
            cout << "Acesso permitido" << endl;
            break;
        } else {
            if ((i + 1) == maxAttempts) {
                cout << "Limite de tentativas permitidas excedido" << endl;
                break;
            } else {
                cout << "Senha incorreta, tente novamente" << endl;
                i++;
            }
        }
    }
}