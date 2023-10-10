// C++ Implementation
// Array Update 
// Updating an Element at a Specific Location

#include <iostream>
using namespace std;

int main() {
    int array1[] = {1,2,3,4,5};
    int k = 2; 
    int n = 5; 
    int item = 8;


    printf("Original array elements are:\n");
	
    for(int i = 0; i<n; i++) {
        printf("%d \n", array1[i]);
    }
    
    array1[k-1] = item;

    printf("Array elements after update:\n");
	
    for(int i = 0; i<n; i++) {
        printf("%d \n", array1[i]);
    }
}