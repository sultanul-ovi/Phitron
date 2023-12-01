#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, q;
    cin >> n >> q;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long pre[n];
    pre[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = a[i] + pre[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%lld ", pre[i]);
    }
    while (q--)
    {
        long long l, r;
        cin >> l >> r;
        l--;
        r--;
        long long sum;
        if (l == 0)
            sum = pre[r];
        else
            sum = pre[r] - pre[l - 1];
        cout << sum << endl;
    }
    return 0;
}

// 6 3
// 6 4 2 7 2 7
// 1 3
// 2 4
// 4 5



// 6 10 12 19 21 28 
// 12
// 13
// 9
