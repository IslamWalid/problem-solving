//Problem link: https://codeforces.com/contest/144/problem/B

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


const int N = 1001;
int n;
int x[N], y[N], r[N];

int dist_square(int x1, int y1, int x2, int y2) {
    return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}

bool is_warm(int cx, int cy) {
    for (int i = 0; i < n; i++) {
        if (dist_square(cx, cy, x[i], y[i]) <= r[i] * r[i])
            return true;
    }
    return false;
}

int main() {
    IO();
    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> x[i] >> y[i] >> r[i];

    int cnt = 0;
    for (int i = min(x1, x2); i <= max(x1, x2); i++) {
        if (!is_warm(i, y1))
            cnt++;
        if (!is_warm(i, y2))
            cnt++;
    }
    
    for (int i = min(y1, y2) + 1; i < max(y1, y2); i++) {
        if (!is_warm(x1, i))
            cnt++;
        if (!is_warm(x2, i))
            cnt++;
    }

    cout << cnt << endl;

    kill;       
}