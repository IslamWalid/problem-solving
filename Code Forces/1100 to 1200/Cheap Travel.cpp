// Problem link: https://codeforces.com/problemset/problem/466/A

#include <bits/stdc++.h>

#define kill return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    int n, m, a, b; cin >> n >> m >> a >> b;
    int x = n / m;
    int y = (n + m - 1) / m;

    int p1 = x * b + (n - (x * m)) * a;
    int p2 = y * b;
    int p3 = n * a;

    cout << min(min(p1, p2), p3) << endl;

    return 0;
}