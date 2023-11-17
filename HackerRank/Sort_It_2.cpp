#include <iostream>
#include <algorithm>
using namespace std;

int* sort_it(int n) {
    int* arr = new int[n]; // Dynamically allocate array
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Sort the array in descending order
    sort(arr, arr + n, greater<int>());

    return arr;
}

int main() {
    int n;
    cin >> n;

    int* sorted_arr = sort_it(n); // Receive the sorted array from sort_it function

    // Print the sorted array
    for (int i = 0; i < n; ++i) {
        cout << sorted_arr[i] << " ";
    }
    cout << endl;

    delete[] sorted_arr; // Free the dynamically allocated memory

    return 0;
}
