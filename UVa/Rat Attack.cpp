//Problem link: https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1301

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


bool valid (int x, int y) {
    return x >= 0 && y >= 0 && x < 1025 && y < 1025;
}

int main() {
    IO();
    int t; cin >> t;
    while (t--) {
        int d, n; cin >> d >> n;
        int grid[1025][1025] {0};

        while (n--) {
            int x, y, r; cin >> x >> y >> r;
            for (int i = -d; i <= d; i++) {
                for (int j = -d; j <= d; j++) {
                    int newx = x + i, newy = y + j;
                    if (valid(newx, newy))
                        grid[newx][newy] += r;
                }
            }
        }

        int mx = 0, x, y;
        for (int i = 0; i < 1025; i++) {
            for (int j = 0; j < 1025; j++) {
                if (grid[i][j] > mx) {
                    x = i;
                    y = j;
                    mx = grid[i][j];
                }
            }
        }

        cout << x << space << y << space << mx << endl;
    }

    kill;
}