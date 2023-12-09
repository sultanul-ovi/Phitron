#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M, X;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    cin >> M;
    vector<int> B(M);
    for (int i = 0; i < M; ++i) {
        cin >> B[i];
    }

    cin >> X;

    vector<int> result;
    result.reserve(N + M);

    for (int i = 0; i < X; ++i) {
        result.push_back(A[i]);
    }

    for (int i = 0; i < M; ++i) {
        result.push_back(B[i]);
    }

    for (int i = X; i < N; ++i) {
        result.push_back(A[i]);
    }

    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
