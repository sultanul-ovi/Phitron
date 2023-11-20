#include <iostream>
#include <algorithm> // For std::max
using namespace std;

int main() {
    int N;
    cin >> N;

    int maxVal = 0; // Initialize with minimum possible value
    int current;

    for (int i = 0; i < N; ++i) {
        cin >> current;
        maxVal = max(maxVal, current); // Update maxVal if current number is greater
    }

    cout << maxVal << endl;

    return 0;
}
