//Problem link: https://codeforces.com/contest/141/problem/B

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



int main() {
    IO();
    int a, x, y; cin >> a >> x >> y;

    if (y % a == 0) {
        cout << -1 << endl;
        kill;
    }

    int id = (y + a - 1) / a;

    if (id <= 2) {
        if (2 * abs(x) < a)
            cout << id << endl;
        else
            cout << -1 << endl;
    }
    else if (id % 2 == 0) {
        if (2 * abs(x) < a)
            cout << id + (id - 2) / 2 << endl;
        else
            cout << -1 << endl;
    }
    else {
        if (x < 0 && abs(x) < a)
            cout << id + (id - 3) / 2 << endl;
        else if (x > 0 && x < a)
            cout << id + (id - 3) / 2 + 1 << endl;
        else
            cout << -1 << endl;
    }

    kill;
}