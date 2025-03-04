#include <iostream>

using namespace std;

// Function to print the truth table for Modus Ponens
void printTruthTable() {
    // Headers for the truth table
    cout << "P\tQ\tP -> Q\tP and (P -> Q)\tConclusion Q" << endl;

    // Variables to hold truth values of P and Q
    bool P, Q;

    // Iterate over all possible truth values of P and Q
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            P = i;  // P takes values true (1) and false (0)
            Q = j;  // Q takes values true (1) and false (0)

            // Calculate the implication P -> Q
            bool implication = (!P || Q);

            // Check Modus Ponens condition: P and (P -> Q)
            bool modusPonensCondition = P && implication;

            // Print the truth table row
            cout << P << "\t" << Q << "\t" << implication << "\t" << modusPonensCondition << "\t\t" << Q << endl;
        }
    }
}

int main() {
    // Print the truth table for Modus Ponens
    printTruthTable();

    return 0;
}
