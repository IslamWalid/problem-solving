//Problem link: https://codeforces.com/contest/152/problem/B

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

int n, m;

bool is_valid(ll x, ll y) {
    return x >= 1 && x <= n && y >= 1 && y <= m;
}

int main() {
    IO();
    cin >> n >> m;
    ll xi, yi; cin >> xi >> yi;

    int k; cin >> k;
    ll ans = 0;
    for (int i = 0; i < k; i++) {
        ll dx, dy; cin >> dx >> dy;
        ll low = 0, high = 10e9;
        ll mid, steps = 0;
        while (low <= high) {
            mid = (low + high) / 2;
            if (is_valid(xi + dx * mid, yi + dy * mid)) {
                steps = mid;
                low = mid + 1;
            }
            else
                high = mid - 1;
        }

        xi += dx * steps;
        yi += dy * steps;
        ans += steps;
    }

    cout << ans << endl;

    kill;
}