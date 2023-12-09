#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    unordered_set<int> elements;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        elements.insert(a[i]);
    }

    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (elements.find(a[i] + 1) != elements.end()) {
            ++count;
        }
    }

    cout << count << endl;

    return 0;
}
