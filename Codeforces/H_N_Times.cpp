#include <bits/stdc++.h>
using namespace std;

void printCharacterNTimes(int n, char c) {
    for (int i = 0; i < n; ++i) {
        cout << c << (i < n - 1 ? " " : "");
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        char c;
        cin >> n >> c;
        printCharacterNTimes(n, c);
    }
    return 0;
}
