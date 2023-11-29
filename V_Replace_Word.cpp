#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    string word = "EGYPT";
    size_t pos;
    while ((pos = s.find(word)) < s.length()) {
        s.replace(pos, word.length(), " ");
    }

    cout << s << endl;
    return 0;
}
