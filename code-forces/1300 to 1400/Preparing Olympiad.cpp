//Problem link: https://codeforces.com/contest/550/problem/B

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


int ans = 0;
int n, l, r, x;
vector<int> res;
vector<int> diff;

void bk (int i) {
    if (i == n) {
        int mn = 1000005;
        int mx = 0;
        int sum = 0;

        for (auto item: res) {
            mn = min(mn, item);
            mx = max(mx, item);
            sum += item;
        }

        if (sum >= l && sum <= r && mx - mn >= x)
            ans++;

        return;
    }

    res.push_back(diff[i]);
    bk(i+1);
    res.pop_back();
    bk(i+1);
}

int main() {
    IO();
    cin >> n >> l >> r >> x;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        diff.push_back(a);
    }

    bk(0);
    cout << ans << endl;

    kill;
}