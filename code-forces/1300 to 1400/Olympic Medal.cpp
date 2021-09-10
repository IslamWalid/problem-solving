//Problem link: https://codeforces.com/contest/215/problem/B

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
    int n; cin >> n;
    int r1[n];
    int max_r1 = 0;
    for (int i = 0; i < n; i++) {
        cin >> r1[i];
        max_r1 = max(max_r1, r1[i]);
    }

    int m; cin >> m;
    int p1[m];
    int max_p1 = 0;
    for (int i = 0; i < m; i++) {
        cin >> p1[i];
        max_p1 = max(max_p1, p1[i]);
    }

    int k; cin >> k;
    int p2[k];
    int min_p2 = 10000;
    for (int i = 0; i < k; i++) {
        cin >> p2[i];
        min_p2 = min(min_p2, p2[i]);
    }

    int a, b; cin >> a >> b;

    double r2 = 1.0 * max_r1 * sqrt((double)b * max_p1 / (a * min_p2 + b * max_p1));
    cout << fixed << setprecision(12) << r2 << endl;

    kill;
}