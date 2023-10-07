#include <bits/stdc++.h>
using namespace std;

int main()
{
    list <string> strlist;
    strlist.push_back("one");
    strlist.push_back("two");
    strlist.push_back("three");

    vector <string> strvector(strlist.begin(),strlist.end());

    vector <string>::iterator i;

    for(i=strvector.begin();i<=strvector.end();i++){
        cout<<*i<<endl;
    }
    return 0;
}
