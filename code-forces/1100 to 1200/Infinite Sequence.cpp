// Problem link: https://codeforces.com/problemset/problem/675/A?f0a28=1

#include <bits/stdc++.h>

#define kill return 0
#define space " "

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    ll a, b, c; cin >> a >> b >> c;
    if (c == 0)
    {
        if (a == b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;    
    }
    else if (a == b)
        cout << "YES" << endl;
    else if (((double)(b-a)/c) - ((b-a)/c) == 0 && (b-a)/c > 0) 
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}