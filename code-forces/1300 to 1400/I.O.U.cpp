//Problem link: http://codeforces.com/contest/376/problem/B

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
    int n, m; cin >> n >> m;
    int dep[101] = {0}, owe[101] = {0};

    while (m--) {
        int a, b, c; cin >> a >> b >> c;
        dep[b] += c;
        owe[a] += c;
    }

    int sum = 0;

    for (int i = 1; i <= n; i++) {
        if (owe[i] > dep[i])
            sum += owe[i] - dep[i];
    }

    cout << sum << endl;

    kill;
}