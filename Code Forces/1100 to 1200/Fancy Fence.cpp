// Problem link: https://codeforces.com/contest/270/problem/A

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
    int n; cin >> n;
    int a;
    while (n--)
    {
        cin >> a;
        if(ceil(-360 / (double)(a-180)) > -360 / (a-180))
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}