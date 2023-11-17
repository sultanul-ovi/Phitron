#include<bits/stdc++.h>

using namespace std;

// Macros for frequently used operations and shortcuts
#define FOR(i, a, b) for (int i = (a); i <= (b); i++)
#define FORD(i, a, b) for (int i = (a); i >= (b); i--)
#define REP(i, n) for (int i = 0; i < (n); i++)
#define REPD(i, n) for (int i = (n) - 1; i >= 0; i--)
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

// Commonly used constant definitions
const double PI = acos(-1.0);
const double EPS = 1e-9;
const int INF = int(1e9) + 5;
const long long LINF = 1LL << 60;
const int MOD = 1e9 + 7; // Check problem statement for actual MOD value

// Commonly used type definitions
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef complex<double> cd;

// Fast I/O
void setup_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}


// Factorization, prime checking, etc.
bool is_prime(int n) {
    if (n < 2) return false;
    for (int x = 2; x*x <= n; x++) {
        if (n % x == 0) return false;
    }
    return true;
}

// Modular arithmetic
int add(int a, int b, int mod = MOD) { return (a + b) % mod; }
int sub(int a, int b, int mod = MOD) { return (a - b + mod) % mod; }
int mul(int a, int b, int mod = MOD) { return (int)((ll)a * b % mod); }
int powmod(int a, int p, int mod = MOD) {
    int res = 1;
    while (p) {
        if (p & 1) res = mul(res, a, mod);
        a = mul(a, a, mod);
        p >>= 1;
    }
    return res;
}

// Binary Search
int binary_search(const vi &arr, int x) {
    int l = 0, r = arr.size() - 1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x) return m;
        else if (arr[m] < x) l = m + 1;
        else r = m - 1;
    }
    return -1; // Not found
}


int main() {
    setup_io(); 

    int a, b;
    cin >> a >> b;
    cout <<a << " " << b << endl;



    return 0;
}

