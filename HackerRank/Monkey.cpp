#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string sortLine(const string& line) {
    string sortedLine;
    for (char ch : line) {
        if (ch != ' ') {
            sortedLine += ch;
        }
    }
    sort(sortedLine.begin(), sortedLine.end());
    return sortedLine;
}

int main() {
    string line;
    while (getline(cin, line)) {
        cout << sortLine(line) << endl;
    }
    return 0;
}
