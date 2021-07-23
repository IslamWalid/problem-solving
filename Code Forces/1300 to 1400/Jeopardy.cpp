// Problem link: http://codeforces.com/problemset/problem/413/C

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int r[n],
        a[m];
    ull ans = 0;

    for (int i = 0; i < n; i++) {
        cin >> r[i];
        ans += r[i];
    }
    
    int t;
    for (int i = 0; i < m; i++) {
        cin >> t;
        a[i] = r[t-1];
        ans -= a[i];
    }

    sort (a, a+m, greater<int>());

    for (int i = 0; i < m; i++) {
        if (ans < a[i])
            ans += a[i];
        else
            ans *= 2;
    }

    cout << ans << endl;

    return 0;
}