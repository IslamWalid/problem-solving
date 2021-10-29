//Problem link: https://codeforces.com/contest/1594/problem/B

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


ll Pow (ll base, ll power) {
    ll ans = 1;
    while (power) {
        if (power & 1)
            ans = (base * ans) % MOD;
        base = (base * base) % MOD;
        power >>= 1;
    }
    return ans;
}

int main() {
    IO();
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        ll ans = 0;
        for (int i = 0; k != 0; i++) {
            if (k & 1)
                ans = (ans + Pow (n, i)) % MOD;
            k >>= 1;
        }
        cout << ans << endl;
    }
    
    kill;
}