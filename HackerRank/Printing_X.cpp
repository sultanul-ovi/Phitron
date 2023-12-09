#include <iostream>
using namespace std;

void printXPattern(int N) {
    for (int row = 0; row < N; ++row) {
        for (int col = 0; col < N; ++col) {
            if (row == col && row == N / 2) {
                cout << "X";
            } else if (row == col) {
                cout << "\\";
            } else if (col == N - row - 1) {
                cout << "/";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int N;
    cin >> N;

    if (N % 2 != 0) { // Check if N is an odd integer
        printXPattern(N);
    } else {
        cout << "N must be an odd integer." << endl;
    }

    return 0;
}
