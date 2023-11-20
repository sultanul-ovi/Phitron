#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int &a : A) {
            cin >> a;
        }

        int minSum = INT_MAX; // Initialize minSum with the maximum possible value

        // Iterate through the array to find the minimum sum
        for (int i = 0; i < N; ++i) {
            for (int j = i + 1; j < N; ++j) {
                int currentSum = A[i] + A[j] + j - i;
                minSum = min(minSum, currentSum); // Update minSum if a smaller sum is found
            }
        }

        cout << minSum << endl; // Output the minimum sum
    }

    return 0;
}
