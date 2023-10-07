#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> PII;


bool cmp(PII A,PII B){
    return (A.second*B.first>A.first*B.second);
}
bool cmpv(PII A,PII B){
    return (A.first>B.first);
}
bool cmpc(PII A,PII B){
    return (A.second>B.second);
}
void knapsack_weight()
{
    ifstream FILE;
    ofstream MYFILE;
    MYFILE.open("OutputTestcaseForKnapsack.txt");
    FILE.open("InputTestcaseForKnapsack.txt");

    int n,W;
    vector <PII> V;
    FILE>>n;
    for(int i=0;i<n;i++){
        int weight,price;
        FILE>>weight>>price;
        V.push_back(PII(weight,price));
    }
    FILE>>W;
    sort(V.begin(),V.end(),cmpv);
    MYFILE<<"Printing the sorted vector on the basis of weight:"<<endl;
    MYFILE<<"Weight"<<"   "<<"price"<<endl;
    for(int i=0;i<n;i++){
        MYFILE<<V[i].first<<"     "<<V[i].second<<endl;
    }

    double ans=0;
    int z;

    MYFILE<<"Solution vector for weight is:"<<endl;
    for(int i=0;i<n;i++){
        z=min(W,V[i].first);
        W-=z;
        MYFILE<<(double)((double)z/(double)V[i].first)<<" ";
        ans=(double)ans+((double)z*((double)(V[i].second))/((double)(V[i].first)));
    }
    MYFILE<<endl;
    MYFILE<<"Maximum cost: "<<ans<<endl;

}
void fractional_knapsack()
{
    int W,n;
    ifstream FILE;
    ofstream MYFILE;
    MYFILE.open("OutputTestcaseForKnapsack1.txt");
    FILE.open("InputTestcaseForKnapsack.txt");

    vector <PII> V;
    FILE>>n;
    for(int i=0;i<n;i++){
        int weight,price;
        FILE>>weight>>price;
        V.push_back(PII(weight,price));
    }
    FILE>>W;
    sort(V.begin(),V.end(),cmp);
    MYFILE<<"printing the sorted vector per weight price"<<endl;
    MYFILE<<"weight"<<"   "<<"price"<<endl;

    for(int i=0;i<n;i++){
        MYFILE<<V[i].first<<"     "<<V[i].second<<endl;
    }


    double ans=0;
    int z;

    MYFILE<<"Solution vector for fractional knapsack is:"<<endl;
    for(int i=0;i<n;i++){
        z=min(W,V[i].first);
        W=W-z;
        MYFILE<<(double)((double)z/(double)V[i].first)<<" ";
        ans=(double)ans+((double)z*((double)(V[i].second))/((double)(V[i].first)));
    }
    MYFILE<<endl;
    MYFILE<<"Maximum cost: "<<ans<<endl;
}
void knapsack_cost()
{
    int n,W;
    vector <PII> V;
    ifstream FILE;
    ofstream MYFILE;
    MYFILE.open("OutputTestcaseForKnapsack2.txt");
    FILE.open("InputTestcaseForKnapsack.txt");

    FILE>>n;
    for(int i=0;i<n;i++){
        int weight,price;
        FILE>>weight>>price;
        V.push_back(PII(weight,price));
    }
    FILE>>W;
    sort(V.begin(),V.end(),cmpc);
    MYFILE<<"Printing the sorted vector on the basis of price:"<<endl;
    MYFILE<<"Weight"<<"   "<<"price"<<endl;
    for(int i=0;i<n;i++){
        MYFILE<<V[i].first<<"     "<<V[i].second<<endl;
    }

    double ans=0;
    int z;
    MYFILE<<"Solution vector for cost is:"<<endl;
    for(int i=0;i<n;i++){
        z=min(W,V[i].first);
        W-=z;
        MYFILE<<(double)((double)z/(double)V[i].first)<<" ";
        ans=(double)ans+((double)z*((double)(V[i].second))/((double)(V[i].first)));
    }
    MYFILE<<endl;
    MYFILE<<"Maximum cost: "<<ans<<endl;

}
int main()
{

    knapsack_weight();
    fractional_knapsack();
    knapsack_cost();
}
