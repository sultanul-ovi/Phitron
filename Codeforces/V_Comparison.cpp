#include <iostream>
#include <string>
using namespace std;

int main() {
    int A, B;
    char S;

    cin >> A >> S >> B;

    bool comparison;
    switch (S) {
        case '<':
            comparison = A < B;
            break;
        case '>':
            comparison = A > B;
            break;
        case '=':
            comparison = A == B;
            break;
        default:
            comparison = false; // Invalid symbol
    }

    cout << (comparison ? "Right" : "Wrong") << endl;

    return 0;
}
