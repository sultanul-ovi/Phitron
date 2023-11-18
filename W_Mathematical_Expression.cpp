#include <iostream>
#include <string>
using namespace std;

int main() {
    int A, B, C;
    char S, Q;

    cin >> A >> S >> B >> Q >> C;

    bool isCorrect;
    switch (S) {
        case '+':
            isCorrect = (A + B == C);
            break;
        case '-':
            isCorrect = (A - B == C);
            break;
        case '*':
            isCorrect = (A * B == C);
            break;
        default:
            isCorrect = false; // Invalid operator
    }

    if (isCorrect) {
        cout << "Yes" << endl;
    } else {
        // Output the correct result
        switch (S) {
            case '+':
                cout << A + B << endl;
                break;
            case '-':
                cout << A - B << endl;
                break;
            case '*':
                cout << A * B << endl;
                break;
        }
    }

    return 0;
}
