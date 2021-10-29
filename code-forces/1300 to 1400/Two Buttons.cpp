//Problem link: https://codeforces.com/contest/520/problem/B

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
    int n, m; cin >> n >> m;

    int cnt = 0;

    while (n != m) {
        if (m > n) {
            if (m % 2 == 0) {
                m /= 2;
                cnt++;
            }
            else {
                m++;
                cnt++;
            }
        }
        else {
            m++;
            cnt++;
        }
    }

    cout << cnt << endl;

    kill;
}