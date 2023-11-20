#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int frequency[26] = {0}; // Frequency array for each letter
    char ch;

    // Read characters and update their frequency
    for (int i = 0; i < N; ++i) {
        cin >> ch;
        frequency[ch - 'a']++;
    }

    // Print characters in sorted order based on frequency
    for (int i = 0; i < 26; ++i) {
        for (int j = 0; j < frequency[i]; ++j) {
            cout << char('a' + i);
        }
    }
    cout << endl;

    return 0;
}
