//Problem link: https://codeforces.com/contest/337/problem/B

#include <bits/stdc++.h>

#define kill return 0
#define PI  3.14159265358979323846
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void IO() {
    #ifdef LOCAL_MACHINE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}



int main() {
    IO();
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int x1 = a * d - b * c;
    int x2 = b * c - a * d;

    if (x1 > 0)
        cout << x1 / __gcd(x1, a * d) << "/" << a * d / __gcd(x1, a * d) << endl;
    else
        cout << x2 / __gcd(x2, b * c) << "/" << b * c / __gcd(x2, b * c) << endl;

    kill;
}