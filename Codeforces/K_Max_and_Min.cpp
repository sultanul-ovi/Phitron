#include <iostream>
#include <algorithm>  // Include for min and max functions
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int minVal = min({A, B, C});
    int maxVal = max({A, B, C});

    cout << minVal << " " << maxVal << endl;

    return 0;
}
