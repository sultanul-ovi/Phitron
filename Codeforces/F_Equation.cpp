#include <bits/stdc++.h>
using namespace std;

long long power(int x, int n) {
    long long result = 1;
    for (int i = 0; i < n; ++i) {
        result *= x;
    }
    return result;
}

int main() {
    int x, n;
    cin >> x >> n;

    long long sum = 0;
    for (int i = 0; i <= n; i += 2) {
        sum += power(x, i);
    }

    cout << sum - 1 << endl; // Subtract 1 for X^0 term

    return 0;
}
