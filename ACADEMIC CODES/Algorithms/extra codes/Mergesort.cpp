#include <bits/stdc++.h>
using namespace std;

int num[10000],temp[10000];


void mergesort(int lo,int hi){
    int mid,n;

    if(lo==hi){
        return;
    }
    else{
        mid=(lo+hi)/2;
    }
    mergesort(lo,mid);
    mergesort(mid+1,hi);

    int i,j,k;

    for(i=lo,j=mid+1,k=lo;k<=hi;k++){
        if(i==mid+1){
            temp[k]=num[j++];
        }

        else if(j==hi+1){
            temp[k]=num[i++];

        }
        else if(num[i]<num[j]){
            temp[k]=num[i++];
        }
        else{
            temp[k]=num[j++];
        }
    }
    for(k=lo;k<=hi;k++){
        num[k]=temp[k];
    }
}

int main()
{

    int n=5000;
    ifstream FILE;
    ofstream myfile;
    myfile.open("Output for merge sort.txt");
    FILE.open("Output.txt");

    int i;
    int low=0;
    int hi=n-1;


    for(i=0;i<n;i++){

        FILE>>num[i];
       /* c++;
        myfile<<num[i]<<" ";
        c++;*/
    }

    mergesort(low,hi);

   /* myfile<<endl;
    c++;
    myfile<<endl;
    c++;
    myfile<<"Sorted list is:.........................................................."<<endl;
    c++;*/

    cout<<"Sorted list is saved to file:"<<endl;
    for(i=0;i<n;i++){
        myfile<<num[i]<<" ";

    }

    cout<<endl;


    //myfile<<"No. of statements for merge sort is: "<<c;
}
