//Problem link: https://codeforces.com/contest/544/problem/B

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
    int n, k;
    cin >> n >> k;
    char sqaure[n][n];

    int sqn = n * n;
    if (k > (sqn + 1) / 2) {
        cout << "NO" << endl;
        kill;
    }

    for (int i = 0; i < n ;i++) {
        for (int j = 0; j < n; j++) {
            if (k) {
                if (i % 2 == 0) {
                    if (j % 2 == 0) {
                        sqaure[i][j] = 'L';
                        k--;
                    }
                    else
                        sqaure[i][j] = 'S';
                }
                else {
                    if (j % 2 == 0)
                        sqaure[i][j] = 'S';
                    else {
                        sqaure[i][j] = 'L';
                        k--;
                    }
                }
            }
            else
                sqaure[i][j] = 'S';
        }
    }

    cout << "YES" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << sqaure[i][j];
        cout << endl;
    }

    kill;
}