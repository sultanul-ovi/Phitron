#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int N;
    cin >> N;

    unordered_set<int> seen;
    for (int i = 0; i < N; ++i) {
        int value;
        cin >> value;

        if (seen.find(value) != seen.end()) {
            cout << "YES" << endl;
            return 0;
        }

        seen.insert(value);
    }

    cout << "NO" << endl;
    return 0;
}
