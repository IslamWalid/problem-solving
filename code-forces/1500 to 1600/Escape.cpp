//Problem link: https://codeforces.com/contest/148/problem/B

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
    double vp, vd, t, f, c;
    cin >> vp >> vd >> t >> f >> c;
    
    if (vd < vp) {
        cout << 0 << endl;
        kill;
    }

    int ans = 0;

    double p = t * vp;
    while (p < c) {
        double td = p / (vd - vp);
        p += vp * td;
        if (p >= c)
            break;
        double back = p / vd + f;
        p += vp * back;
        ans++;
    }
    cout << ans << endl;
    kill;
}