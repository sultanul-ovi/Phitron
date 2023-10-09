// C++ Implementation
// Array Search
// Searching An Element at a specific location

#include <iostream>
using namespace std;

int main() {
    int array1[] = {1,2,3,4,5,6,7,8,9,10};
    int item = 5; 
    int n = 10;
    int j = 0;
    

    while( j < n){
        if( array1[j] == item ) {
            break;
        }
		
        j = j + 1;
    }
	
    printf("Element found: %d at position %d\n", item, j+1);
}