#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) 
        cin >> arr[i];

    // Sort in ascending order
    sort(arr.begin(), arr.end());
    for (int a : arr)
        cout << a << " ";
    cout << endl;

    // Sort in descending order
    sort(arr.rbegin(), arr.rend());
    for (int a : arr)
        cout << a << " ";
    cout << endl;

    return 0;
}
