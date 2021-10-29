//Problem link: https://codeforces.com/contest/584/problem/B

#include <bits/stdc++.h>

#define kill return 0
#define PI  3.14159265358979323846
#define space ' '
#define MOD 1000000007

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


ll power (ll base, ll pw) {
    ll ans = 1;
    while (pw) {
        if (pw & 1)
            ans = (ans * base) % MOD;
        base = (base * base) % MOD;
        pw >>= 1;
    }
    return ans;
}

int main() {
    IO();
    int n; cin >> n;
    ll x = power(3, 3 * n);
    ll y = power(7, n);

    cout << (x - y + MOD) % MOD << endl;

    kill;
}