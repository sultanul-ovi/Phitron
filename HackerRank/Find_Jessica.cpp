#include <bits/stdc++.h>

using namespace std;



int main()
{
    string s;
    getline(cin, s);
    s = " " + s + " ";

    if (s.find(" Jessica ") < s.length()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}