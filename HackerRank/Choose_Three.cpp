#include <iostream>
#include <algorithm>
using namespace std;

bool findTripletSum(int arr[], int n, int sum) {
    sort(arr, arr + n);  // Sort the array
    for (int i = 0; i < n - 2; i++) {
        int left = i + 1, right = n - 1;
        while (left < right) {
            int currentSum = arr[i] + arr[left] + arr[right];
            if (currentSum == sum) {
                return true;  // Found the triplet
            } else if (currentSum < sum) {
                left++;
            } else {
                right--;
            }
        }
    }
    return false;  // Triplet not found
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, s;
        cin >> n >> s;
        int arr[n];  // Array declaration

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cout << (findTripletSum(arr, n, s) ? "YES" : "NO") << endl;
    }

    return 0;
}
