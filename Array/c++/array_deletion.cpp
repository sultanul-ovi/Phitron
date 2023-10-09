// C++ Implementation
// Array Deletion
// Deleting An Element from a specific location


#include <iostream>
using namespace std;

int main() {
    int array1[] = {1,2,3,4,5};
    int k = 4;
    int n = 5;
    int i;
    int j;
    
    printf("Original array elements:\n");
	
    for(i = 0; i<n; i++) {
        printf("%d \n", array1[i]);
    }
    
    j = k;
	
    while( j < n) {
        array1[j-1] = array1[j];
        j = j + 1;
    }
	
    n = n -1;
    
    printf("Array elements after delete:\n");
	
    for(i = 0; i<n; i++) {
        printf("%d \n", array1[i]);
    }
}