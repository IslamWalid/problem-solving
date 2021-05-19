// Problem link: https://codeforces.com/contest/287/problem/B

#include <bits/stdc++.h>

typedef unsigned long long ull;

using namespace std;

ull sum (ull n)
{
    return (n * (n+1) / 2);
}

ull sum (ull first, ull last)
{
    if (last <= 1)
        return sum(last);
    return sum(last) - sum(first - 1);
}

ull minSplitters(ull k, ull n)
{
    ull st = 1, en = k;
    ull md, s;
    while (st < en)
    {
        md = (st + en) / 2;
        s = sum(md, k);

        if (s == n)
            return k - md + 1;
        else if (s > n)
            st = md + 1;
        else
            en = md;
    }
    return k - st + 2;
    
}

int main()
{
    ull k, n; cin >> n >> k;
    if (n == 1)
        cout << 0 << endl;
    else if (n <= k)
        cout << 1 << endl;
    else
    {
        k--;
        n--;
        if(sum(k) < n)
            cout << -1 << endl;
        else
            cout << minSplitters(k, n) << endl;
    }
    return 0;
}