#include <bits/stdc++.h>

using namespace std;



int main()
{
    int t;
    cin >> t;
    while (t--) {
        string s, x;
        cin >> s >> x;
        string result;

        for (size_t i = 0; i < s.length(); ) {
            if (s.substr(i, x.length()) == x) {
                result += '#';
                i += x.length();
            } else {
                result += s[i];
                ++i;
            }
        }

        cout << result << endl;
    }
    return 0;
}