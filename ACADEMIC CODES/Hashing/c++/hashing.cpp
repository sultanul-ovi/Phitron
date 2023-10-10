// C++ Implementation
// Hashing

#include<bits/stdc++.h>
using namespace std;
  
class Hash
{
    int BUCKET;   
    list<int> *table;

public:

    Hash(int b)
    {
        this->BUCKET = b;
        table = new list<int>[BUCKET];
    }

  
    void insertItem(int key)
    {
        int index = hashFunction(key);
        table[index].push_back(key); 
    }


    void deleteItem(int key)
    {

      int index = hashFunction(key);
      
      list <int> :: iterator i;
      for (i = table[index].begin();
              i != table[index].end(); i++) {
        if (*i == key)
          break;
      }
      if (i != table[index].end())
        table[index].erase(i);
    }
  

    int hashFunction(int x) {
        return (x % BUCKET);
    }
  
    void displayHash() 
    {
      for (int i = 0; i < BUCKET; i++) {
        cout << i;
        for (auto x : table[i])
          cout << " --> " << x;
        cout << endl;
      }
    }
};
  

int main()
{

  int a[] = {115, 121, 237, 48, 132};
  int n = sizeof(a)/sizeof(a[0]);
  
  Hash h(7);   

  h.displayHash();
  cout << "\n";
  
  for (int i = 0; i < n; i++) 
    h.insertItem(a[i]);  
  
  h.displayHash();
  cout << "\n";


  h.deleteItem(132);
  h.displayHash();
  cout << "\n";
  
  return 0;
}