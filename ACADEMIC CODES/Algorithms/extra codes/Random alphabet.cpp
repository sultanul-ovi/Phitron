#include <bits/stdc++.h>
using namespace std;

map <char, int> maping;

void valid(char a, char b, char c){
    int k=maping[a];
    int l=maping[b];
    int m=maping[c];


    if(k>l&&k>m) {
		if(l+m>=k){
            cout<<"Valid Triangle"<<endl;
            return;
		}
		else{
            cout<<"Not valid"<<endl;
            return;
		}
	}
	else if(l>k&&l>m) {
        if(k+m>=l){
            cout<<"Valid Triangle"<<endl;
            return;
		}
		else{
            cout<<"Not valid"<<endl;
            return;
		}
	}
	else {
        if(k+l>=m){
            cout<<"Valid Triangle"<<endl;
            return;
		}
		else{
            cout<<"Not valid"<<endl;
            return;
		}
	}

}

int main()
{
    maping.insert(pair<int, int>('a', 1));
    maping.insert(pair<int, int>('b', 2));
    maping.insert(pair<int, int>('c', 3));
    maping.insert(pair<int, int>('d', 4));
    maping.insert(pair<int, int>('e', 5));
    maping.insert(pair<int, int>('f', 6));
    maping.insert(pair<int, int>('g', 7));
    maping.insert(pair<int, int>('h', 8));
    maping.insert(pair<int, int>('i', 9));
    maping.insert(pair<int, int>('j', 10));
    maping.insert(pair<int, int>('k', 11));
    maping.insert(pair<int, int>('l', 12));
    maping.insert(pair<int, int>('m', 13));
    maping.insert(pair<int, int>('n', 14));
    maping.insert(pair<int, int>('o', 15));
    maping.insert(pair<int, int>('p', 16));
    maping.insert(pair<int, int>('q', 17));
    maping.insert(pair<int, int>('r', 18));
    maping.insert(pair<int, int>('s', 19));
    maping.insert(pair<int, int>('t', 20));
    maping.insert(pair<int, int>('u', 21));
    maping.insert(pair<int, int>('v', 22));
    maping.insert(pair<int, int>('w', 23));
    maping.insert(pair<int, int>('x', 24));
    maping.insert(pair<int, int>('y', 25));
    maping.insert(pair<int, int>('z', 26));

    maping.insert(pair<int, int>('A', 27));
    maping.insert(pair<int, int>('B', 28));
    maping.insert(pair<int, int>('C', 29));
    maping.insert(pair<int, int>('D', 30));
    maping.insert(pair<int, int>('E', 31));
    maping.insert(pair<int, int>('F', 32));
    maping.insert(pair<int, int>('G', 33));
    maping.insert(pair<int, int>('H', 34));
    maping.insert(pair<int, int>('I', 35));
    maping.insert(pair<int, int>('J', 36));
    maping.insert(pair<int, int>('K', 37));
    maping.insert(pair<int, int>('L', 38));
    maping.insert(pair<int, int>('M', 39));
    maping.insert(pair<int, int>('N', 40));
    maping.insert(pair<int, int>('O', 41));
    maping.insert(pair<int, int>('P', 42));
    maping.insert(pair<int, int>('Q', 43));
    maping.insert(pair<int, int>('R', 44));
    maping.insert(pair<int, int>('S', 45));
    maping.insert(pair<int, int>('T', 46));
    maping.insert(pair<int, int>('U', 47));
    maping.insert(pair<int, int>('V', 48));
    maping.insert(pair<int, int>('W', 49));
    maping.insert(pair<int, int>('X', 50));
    maping.insert(pair<int, int>('Y', 51));
    maping.insert(pair<int, int>('Z', 52));


    map<char, int>::iterator itr;

    cout<<"Choose three alphabets randomly in order:"<<endl;
    char a_,b_,c_;
    cin>>a_>>b_>>c_;
    valid(a_,b_,c_);
}
