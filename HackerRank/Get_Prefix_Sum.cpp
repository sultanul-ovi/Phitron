#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> A(N), prefixSum(N);

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    prefixSum[0] = A[0];
    for (int i = 1; i < N; ++i) {
        prefixSum[i] = prefixSum[i - 1] + A[i];
    }

    for (int i = N - 1; i >= 0; --i) {
        cout << prefixSum[i] << " ";
    }
    cout << endl;

    return 0;
}
