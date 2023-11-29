#include <bits/stdc++.h>
using namespace std;

bool isLucky(const string& ticket) {
    int sumFirst = ticket[0] - '0' + ticket[1] - '0' + ticket[2] - '0';
    int sumLast = ticket[3] - '0' + ticket[4] - '0' + ticket[5] - '0';
    return sumFirst == sumLast;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string ticket;
        cin >> ticket;
        cout << (isLucky(ticket) ? "YES" : "NO") << endl;
    }
    return 0;
}
