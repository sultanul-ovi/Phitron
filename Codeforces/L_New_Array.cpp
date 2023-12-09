#include <iostream>
#include <vector>
using namespace std;

vector<int> concatenateArrays(const vector<int>& B, const vector<int>& A) {
    vector<int> C;
    C.reserve(A.size() + B.size()); // Optimize for space allocation

    // Add elements of B
    for (int element : B) {
        C.push_back(element);
    }

    // Add elements of A
    for (int element : A) {
        C.push_back(element);
    }

    return C;
}

int main() {
    int N;
    cin >> N;

    vector<int> A(N), B(N);
    
    // Reading array A
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // Reading array B
    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }

    vector<int> C = concatenateArrays(B, A);

    // Printing array C
    for (int element : C) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}
