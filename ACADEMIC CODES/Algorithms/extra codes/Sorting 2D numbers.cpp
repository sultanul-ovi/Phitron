#include <bits/stdc++.h>
using namespace std;

struct point{
    int x;
    int y;

};
bool operator<(point A, point B)
{
    if(A.x!=B.x) return A.x<B.x;
    return A.y<B.y;
}

int main()
{
    point p[3];
    cout<<"X"<<" "<<"Y:"<<endl;
    for(int i=0;i<3;i++){
        cin>>p[i].x;
        cin>>p[i].y;
    }
    sort(p,p+3);
    cout<<"Sorted 2D co-ordinates are:"<<endl;
    cout<<"X"<<" "<<"Y :"<<endl;
    for(int i=0;i<3;i++){
        cout<<p[i].x<<" ";
        cout<<p[i].y<<endl;
    }

}
