#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, result;
    getline(cin, s);
    stringstream ss(s);
    string word;

    while (ss >> word) {
        reverse(word.begin(), word.end());
        if (!result.empty()) result += " "; // Add space before each word except the first
        result += word;
    }

    cout << result << endl;
    return 0;
}
