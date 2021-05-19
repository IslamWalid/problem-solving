// Problem link: https://codeforces.com/contest/764/problem/A

#include <bits/stdc++.h>

#define kill return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    int n, m, z; cin >> n >> m >> z;
    int lcm = (n * m) / __gcd(n, m);
    cout << z / lcm << endl;
    return 0;
}