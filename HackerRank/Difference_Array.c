// Written by Ovi, 2023-11-04
// Program to compute absolute differences between elements of an array and its sorted version using selection sort.

#include <stdio.h>
#include <stdlib.h>

// Function to perform selection sort
void selSort(int *arr, int sz) {
    int pos, tmp, i, j;
    for (i = 0; i < sz - 1; i++) {
        pos = i;
        for (j = i + 1; j < sz; j++) {
            if (arr[j] < arr[pos])
                pos = j;
        }
        tmp = arr[pos];
        arr[pos] = arr[i];
        arr[i] = tmp;
    }
}

int main() {
    int t, n;
    scanf("%d", &t);

    while(t--) {
        scanf("%d", &n);
        int a[n], b[n], c[n];

        // Reading array a
        for(int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            b[i] = a[i]; // Making a copy of a to b
        }

        // Sorting the array b using selection sort
        selSort(b, n);

        // Computing absolute differences for array c
        for(int i = 0; i < n; i++) {
            c[i] = abs(a[i] - b[i]);
        }

        // Printing array c
        for(int i = 0; i < n; i++) {
            printf("%d ", c[i]);
        }
        printf("\n");
    }

    return 0;
}
