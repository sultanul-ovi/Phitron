#include <bits/stdc++.h>
using namespace std;


int main()
{
    int a,b;
    ifstream input;
    ofstream output;

    int number;


    int n;
    cout<<"How many numbers you want to generate?:"<<endl;
    cin>>n;

    output.open("Output.txt");

    for(int i=0;i<n;i++){
        number=rand()%10000;
        cout<<number<<" ";
        output<<number<<" ";
    }
}
