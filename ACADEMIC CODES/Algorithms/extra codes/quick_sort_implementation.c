#include<stdio.h>

void swap(int *a, int *b){
int t = *a;
*a = *b;
*b = t;
}

int partition(int array[], int low, int high){

    int pivot = array[high];
    int i = (low-1);

    for(int j=low; j<high; j++){
        if(array[j]<=pivot){
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i+1], &array[high]);
    return(i+1);
}

void quickSort(int array[], int low, int high){
if (low<high)
{
    int p = partition(array, low, high);
    quickSort(array, low, p-1);
    quickSort(array, p+1, high);
}
}

int main()
{
    int data[10], i, n;
    printf("Enter the number of array items: ");
    scanf("%d", &n);

    printf("Enter the array of data to be sorted: ");
    for(i = 0; i<n ; i++)
        scanf("%d", &data[i]);

    printf("Unsorted data: ");
    for(i = 0; i<n ; i++)
        printf("%d  ", data[i]);

    quickSort(data, 0, n-1);

    printf("\nSorted data: ");
    for(i = 0; i<n ; i++)
        printf("%d  ", data[i]);

}
