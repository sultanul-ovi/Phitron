#include <bits/stdc++.h>
using namespace std;

// Class to represent frequency of a character
class Freq {
public:
    char value; // The character
    int count;  // Frequency of the character
};

// Comparator function for sorting
bool cmp(Freq a, Freq b) {
    // If counts are equal, sort by character value in ascending order
    if (a.count == b.count) {
        return a.value < b.value;
    } 
    // Otherwise, sort by frequency in descending order
    else {
        return a.count > b.count;
    }
}

int main() {
    string s;
    cin >> s; // Read input string

    // Initialize frequency array for each lowercase alphabet character
    Freq f[26];
    for (int i = 0; i < 26; i++) {
        f[i].value = char(i + 'a'); // Assign alphabet character
        f[i].count = 0;             // Initialize count to 0
    }

    // Count the frequency of each character in the string
    for (char c : s) {
        int ascii = int(c - 'a'); // Convert character to its corresponding index
        f[ascii].count += 1;      // Increment the count for this character
    }

    // Sort the frequency array based on the defined comparator
    sort(f, f + 26, cmp);

    // Print characters by frequency, most frequent first
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < f[i].count; j++) {
            cout << f[i].value;
        }
    }

    return 0;
}
