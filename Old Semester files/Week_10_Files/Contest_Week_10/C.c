#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#include <limits.h>

// test1.exe < input.txt > output.txt

/*
int: -2^31 to 2^31 - 1
    printf("%d\n", INT_MAX);
    printf("%d\n", INT_MIN);
short: -2^15 to 2^15 - 1

long long: -2^63 to 2^63-1 lld
unsigned long long llu

5e100 = 5 * 10^100
1e20 = 10^20
ascii value of null character(\0) is 0
*/

#define LL long long
#define ULL unsigned long long

#define min(a, b) (a < b ? a : b)
#define max(a, b) (a > b ? a : b)
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define SQR(a) ((a) * (a))
#define ABS(x) ((x) < 0 ? -(x) : (x))

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

unsigned int ToInt(char str[])
{
    int len = strlen(str);
    unsigned int ans = 0;
    for (int i = 0; i < len; i++)
        ans = ans * 2 + str[i] - '0';
    return ans;
}

void ToBinary(unsigned int val, char str[], int k)
{
    int idx = 0;
    while (val)
    {
        int rem = val % 2;
        val = val / 2;
        str[idx] = '0' + rem;
        idx++;
    }
    while ((idx + 1) != k)
    {
        str[idx] = '0';
        idx++;
    }
    str[idx] = '\0';
    strrev(str);
}

int printFibonacci(int n)
{
    int f_a = 0, f_b = 1, f_c;

    // for (int f_i = 0; f_i < n; f_i++)
    {
        while (f_a < n)
        {
            printf("%d ", f_a);
            f_c = f_a + f_b;
            f_a = f_b;
            f_b = f_c;
        }
    }
    return (f_c - f_a);
}

unsigned long long find_factorial(int a)
{
    unsigned long long fact_f = 1;
    if (a < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else
    {
        for (int f_i = 1; f_i <= a; ++f_i)
        {
            fact_f *= f_i;
        }
    }
    return fact_f;
}

int isprime(int a)
{
    if (a == 2)
        return 1;
    else if (a % 2 == 0 || a == 0 || a == 1)
        return 0;
    for (int i = 3; i <= sqrt(a); i += 2)
        if (a % i == 0)
            return 0;
    return 1;
}

int gcd(int a, int b)
{
    while (a)
    {
        int rem_g = b % a;
        b = a;
        a = rem_g;
    }
    return b;
}

int lcm(int a, int b)
{
    int max_l = max(a, b) - 1;
    while (max_l++)
    {
        if (max_l % a == 0 && max_l % b == 0)
            break;
    }
    return max_l;
}

int digits(int a)
{
    int count_a = 0, sum_a = 0, prod_a = 1, rev_a = 0, rem_a = 0;
    int array_a[10] = {0};
    while (a)
    {
        rem_a = a % 10;
        a = a / 10;
        rev_a = rev_a * 10 + rem_a;
        sum_a = sum_a + rem_a;
        prod_a = prod_a * rem_a;
        count_a++;
        array_a[rem_a]++;
    }
    printf("%d\n", count_a);
    printf("%d\n", sum_a);
    printf("%d\n", prod_a);
    printf("%d\n", rev_a);
    for (int ia = 0; ia < 10; ia++)
        printf("%d occurs %d times.\n", ia, array_a[ia]);
}

int array_rev(int a[], int a_n)
{
    for (int ia = 0; ia < a_n / 2; ia++)
        swap(&a[ia], &a[a_n - 1 - ia]);
}
bool _reverse_sorted(int arr[], int n)
{
    if (n == 0 || n == 1)
        return true;
    for (int i = 1; i < n; i++)
        if (arr[i - 1] < arr[i])
            return false;
    return true;
}

int array_rrot(int a[], int a_n, int r)
{
    r = r % a_n;
    int ia = 0, ib = 0;
    for (ib = 0; ib < r; ib++)
    {
        int temp = a[a_n - 1];
        for (ia = a_n - 1; ia > 0; ia--)
        {
            a[ia] = a[ia - 1];
        }
        a[0] = temp;
    }
}

int array_lrot(int a[], int a_n, int r)
{
    r = r % a_n;
    int ia = 0, ib = 0;
    for (ib = 0; ib < r; ib++)
    {
        int temp = a[0];
        for (ia = 0; ia < a_n - 1; ia++)
        {
            a[ia] = a[ia + 1];
        }
        a[a_n - 1] = temp;
    }
}

void selectionSort(int array[], int size)
{
    for (int step = 0; step < size - 1; step++)
    {
        int min_idx = step;
        for (int i = step + 1; i < size; i++)
            // To sort in descending order, change > to < in this line.
            if (array[i] < array[min_idx])
                min_idx = i;
        swap(&array[min_idx], &array[step]);
    }
}

void bubbleSort(int array[], int size)
{
    for (int step = 0; step < size - 1; ++step)
    {
        int swapped = 0;
        for (int i = 0; i < size - step - 1; ++i)
        {
            // change > to < to sort in descending order
            if (array[i] > array[i + 1])
            {
                swap(&array[i], &array[i + 1]);
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }
}

void insertionSort(int array[], int size)
{
    for (int step = 1; step < size; step++)
    {
        int key = array[step];
        int j = step - 1;
        // For descending order, change key<array[j] to key>array[j].
        while (key < array[j] && j >= 0)
        {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = key;
    }
}

int partition(int array[], int low, int high)
{

    int pivot = array[high];
    int i = (low - 1);
    for (int j = low; j < high; j++)
    {
        if (array[j] <= pivot)
        {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]);
    return (i + 1);
}

void quickSort(int array[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(array, low, high);
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}

void merge(int arr[], int p, int q, int r)
{

    // Create L ← A[p..q] and M ← A[q+1..r]
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1], M[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[p + i];
    for (int j = 0; j < n2; j++)
        M[j] = arr[q + 1 + j];

    // Maintain current index of sub-arrays and main array
    int i, j, k;
    i = 0;
    j = 0;
    k = p;

    // Until we reach either end of either L or M, pick larger among
    // elements L and M and place them in the correct position at A[p..r]
    while (i < n1 && j < n2)
    {
        if (L[i] <= M[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = M[j];
            j++;
        }
        k++;
    }

    // When we run out of elements in either L or M,
    // pick up the remaining elements and put in A[p..r]
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = M[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {

        // m is the point where the array is divided into two subarrays
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        // Merge the sorted subarrays
        merge(arr, l, m, r);
    }
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; ++i)
        printf("%d  ", array[i]);
    printf("\n");
}

int main()
{

    int n = 0, n1 = 0, n2 = 0, n3 = 0;
    int m = 0, m1 = 0, m2 = 0, m3 = 0;

    int i = 0, j = 0, k = 0;

    int sum = 0, prod = 1, count = 0, flag = 1;
    int rem = 0, rev = 0;

    scanf("%d", &m);

    while (m--)
    {
        flag = 1;
        k = 0;
        scanf("%d", &n);
        int a[n];
        int b[n];
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for (i = 0, j = n - 1; i <= j;)
        {
            if (flag)
            {
                b[k++] = a[i++];
                flag = 0;
            }
            else
            {
                b[k++] = a[j--];
                flag = 1;
            }
        }
        for (i = 0; i < n; i++)
            printf("%d ", b[i]);
        printf("\n");
    }
}
