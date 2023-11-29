#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int count = 0;
    bool inWord = false;

    for (char c : s) {
        if (isalpha(c)) { // Check if the character is a letter
            if (!inWord) {
                inWord = true; // Start of a new word
                count++;
            }
        } else {
            inWord = false; // Non-letter, end of the current word
        }
    }

    cout << count << endl;
    return 0;
}
