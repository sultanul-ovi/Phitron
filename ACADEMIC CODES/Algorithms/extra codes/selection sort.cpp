#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream input;
    ofstream output;
    int n=5000;
    int arr[5000];

    input.open("Output.txt");
    output.open("Output_for_Selection.txt");

    for(int i=0;i<5000;i++){
        input>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        output<<arr[i]<<" ";
    }
}
