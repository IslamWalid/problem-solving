//Problem link: https://codeforces.com/contest/233/problem/B

#include <bits/stdc++.h>

#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define kill return 0
#define PI  3.14159265358979323846
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

ll digitSum(ll n) {
    ll sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    IO;
    ll n; cin >> n;
    for (ll s = 1; s < 90; s++) {
        ll sq = sqrt(s * s + 4 * n);
        if (sq * sq == s * s + 4 * n) {
            ll x = (sq - s) / 2;
            if (x > 0 && digitSum(x) == s) {
                cout << x << endl;
                kill;
            }
        }
    }
    cout << -1 << endl;
    kill;
}