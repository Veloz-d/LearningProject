#include <stdio.h>
#include <iostream>

using namespace std;

struct worker {
    int id;
    int totalPieces;
    char gender;
};

int main() {
    float femalePieces = 0,
        malePieces = 0,
        femaleCount = 0,
        maleCount = 0;
    int maxIterations = 0, 
        totalPayment = 0,
        totalPieces = 0;
    worker allWorkers[100] = {};

    cin >> maxIterations;

    for (int i; i <= maxIterations; i++) {
        worker newWorker;
        cin >> newWorker.id >> newWorker.gender >> newWorker.totalPieces;

        int pieces = newWorker.totalPieces;
        float *average = newWorker.gender == 'F'?
            &femalePieces:
            &malePieces;
        float *genderCount = newWorker.gender == 'F'?
            &femaleCount:
            &maleCount;

        if (pieces <= 30) {
            totalPayment += 1100;
        } else if (pieces > 30 && pieces <= 50) {
            totalPayment += 1100 + (1100 * 0.03 * pieces);
        } else {
            totalPayment += 1100 + (1100 * 0.05 * pieces);
        }

        
        totalPieces += pieces;
        allWorkers[i] = newWorker;
    }

    string femaleSentence, maleSentence;
    femaleSentence = femaleCount > 0?
        "Media de pecas fabricadas por mulheres = " + to_string(femalePieces / femaleCount):
        "Nenhuma mulher";
    maleSentence = maleCount > 0?
        "Media de pecas fabricadas por homens = " + to_string(malePieces / maleCount):
        "Nenhum homem";

    printf("Total da folha de pagamento = %.2f\nTotal de pecas fabricadas no mes = %d\n%s\n%s\nO numero do operario com maior salario = %d",
        totalPayment,
        totalPieces,
        maleSentence,
        femaleSentence,
        3);

    return 0;
}