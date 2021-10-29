//Problem link: https://codeforces.com/contest/617/problem/B

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
    ll res = 0;
    int prev = -1;
    for (int i = 1; i <= n; i++) {
        int a; cin >> a;
        if (a == 1) {
            if (prev == -1) {
                prev = i;
                res = 1;
            }
            else {
                res *= i - prev;
                prev = i;
            }
        }
    }
    cout << res << endl;
    kill;
}