#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        set<char> firstSolved;
        int balloons = 0;
        for (char c : s) {
            balloons++; // One balloon for solving a problem
            if (firstSolved.find(c) == firstSolved.end()) {
                balloons++; // Additional balloon for first solve
                firstSolved.insert(c);
            }
        }

        cout << balloons << endl;
    }
    return 0;
}
