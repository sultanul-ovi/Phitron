#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, evenCount = 0, oddCount = 0, num;
        cin >> n;

        for (int i = 0; i < n; ++i) {
            cin >> num;
            if (num % 2 == 0) evenCount++;
            else oddCount++;
        }

        if (n % 2 != 0) {
            cout << -1 << endl; // Impossible if n is odd
        } else {
            if (evenCount != oddCount) {
                cout << abs(evenCount - oddCount) / 2 << endl; // Min ops to balance even and odd
            } else {
                cout << 0 << endl; // Already balanced
            }
        }
    }
    return 0;
}
