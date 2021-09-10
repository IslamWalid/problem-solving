// Problem link: http://codeforces.com/problemset/problem/577/A

#include <bits/stdc++.h>

#define kill return 0
#define space " "
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    IO;
    int n, x; cin >> n >> x;
    int cnt = 0;
    for(int i=1; i<=n; i++)
    {
        if(x % i == 0 && (x / i) <= n)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}