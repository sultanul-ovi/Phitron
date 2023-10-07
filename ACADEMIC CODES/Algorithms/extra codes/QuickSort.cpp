#include <bits/stdc++.h>
using namespace std;

int partition(int array[],int low,int high);


void quicksort(int array[],int low,int high){
      int q;
      if(low<high){
        q=partition(array,low,high);
        quicksort(array,low,q-1);
        quicksort(array,q+1,high);
      }
}
int partition(int array[],int low,int high){
    int x;
    x=array[high];
    int i=low-1;


    for(int j=low;j<=high-1;j++){

        if(array[j]<=x){
            i++;
            swap(array[i],array[j]);
        }
    }
    swap(array[i+1],array[high]);
    return i+1;
}

int main()
{
    int n=5000;
    ifstream FILE;
    ofstream myfile;
    myfile.open("Output for quick sort.txt");
    FILE.open("Output.txt");
    int array[5000];



    for(int i=0;i<n;i++){
        FILE>>array[i];
    }
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    quicksort(array,0,n-1);
    myfile<<"Sorted data is:.................................................................................."<<endl;
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
        myfile<<array[i]<<" ";
    }


}

