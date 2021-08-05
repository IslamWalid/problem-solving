//Problem link: https://codeforces.com/problemset/problem/813/B

#include <bits/stdc++.h>

#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define kill return 0
#define PI  3.14159265358979323846
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

ll Pow(ll n, ll power) {
    ll res = 1;
    while (power--)
        res *= n;
    return res;
}

int main() {
    IO;
    ll x, y, l, r;
    cin >> x >> y >> l >> r;
    ll maxYear = 0, cnt = 0;
    vector<ll> unlucky;
    unlucky.push_back(l - 1);

    int a = log(r) / log(x);
    int b = log(r) / log(y);
    for (int i = 0; i <= a; i++) {
        for (int j = 0; j <= b; j++) {
            ll year = Pow(x, i) + Pow(y, j);
            if (year >= l && year <= r)
                unlucky.push_back(year);
        }
    }

    unlucky.push_back(r + 1);
    sort(unlucky.begin(), unlucky.end());
    for (int i = 1; i < unlucky.size(); i++)
        maxYear = max(maxYear, unlucky[i] - unlucky[i - 1] - 1);
    cout << maxYear << endl;
    kill;
}