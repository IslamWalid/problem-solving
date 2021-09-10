//Problem link: https://codeforces.com/contest/469/problem/B

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



int main() {
    IO();
    int p, q, l, r; cin >> p >> q >> l >> r;
    set<int> online;
    while (p--) {
        int a, b; cin >> a >> b;
        for (int i = a; i <= b; i++)
            online.insert(i);
    }

    vector <pair<int,int>> v;
    while (q--) {
        int a, b; cin >> a >> b;
        v.push_back({a, b});
    }

    int ans = 0;
    for (int i = l; i <= r; i++) {
        for (auto pr: v) {
            int st = pr.first + i;
            int nd = pr.second + i;

            auto it = online.lower_bound(st);
            if (it != online.end()) {
                if (*it <= nd) {
                    ans++;
                    break;
                }
            }
        }
    }

    cout << ans << endl;

    kill;
}