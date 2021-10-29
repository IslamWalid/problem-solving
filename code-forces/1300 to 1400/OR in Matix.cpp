//Problem link: https://codeforces.com/contest/486/problem/B

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
    int m, n; cin >> m >> n;
    int b[m][n];
    int a[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> b[i][j];
            a[i][j] = 1;
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (b[i][j] == 0) {
                for (int k = 0; k < n; k++)
                    a[i][k] = 0;
                
                for (int k = 0; k < m; k++)
                    a[k][j] = 0;
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (b[i][j] == 1) {
                bool f = false;
                for (int k = 0; k < n; k++)
                    f |= a[i][k];

                for (int k = 0; k < m; k++)
                    f |= a[k][j];

                if (!f) {
                    cout << "NO" << endl;
                    kill;
                }
            }
        }
    }

    cout << "YES" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << space;
        cout << endl;
    }

    kill;
}