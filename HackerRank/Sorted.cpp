#include <iostream>
#include <vector>
using namespace std;

bool isSorted(const vector<int>& A) {
    for (int i = 1; i < A.size(); ++i) {
        if (A[i] < A[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        cout << (isSorted(A) ? "YES" : "NO") << endl;
    }

    return 0;
}
