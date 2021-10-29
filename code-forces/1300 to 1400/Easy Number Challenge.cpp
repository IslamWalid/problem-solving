//Problem link: https://codeforces.com/contest/236/problem/B

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


const int MOD = 1073741824;
map <int, int> mp;

int divisors(int val) {
    if (mp[val] != 0)
        return mp[val];
    
    int cnt = 0;
    for (int i = 1; i * i <= val; i++) {
        if (val % i == 0) {
            if (i * i != val)
                cnt++;
            cnt++;
        }
    }

    mp[val] = cnt;
    return cnt;
}

int main() {
    IO();
    int a, b, c;
    cin >> a >> b >> c;

    ll ans = 0;
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            for (int k = 1; k <= c; k++)
                ans += divisors(1ll * i * j * k) % MOD;
        }
    }
    cout << ans << endl;

    
    kill;
}