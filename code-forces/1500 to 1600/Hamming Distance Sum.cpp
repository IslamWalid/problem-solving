//Problem link: https://codeforces.com/contest/608/problem/B

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
    string s, t;
    cin >> s >> t;
    int ones[t.length() + 1], zeros[t.length() + 1];
    ones[0] = zeros[0] = 0;

    for (int i = 0; i < t.length(); i++) {
        if (t[i] == '0') {
            zeros[i+1] = zeros[i] + 1;
            ones[i+1] = ones[i];
        }
        else {
            ones[i+1] = ones[i] + 1;
            zeros[i+1] = zeros[i];
        }
    }  

    ll ans = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '0')
            ans += ones[t.length() - s.length() + i + 1] - ones[i];
        else
            ans += zeros[t.length() - s.length() + i + 1] - zeros[i];
    }

    cout << ans << endl;

    kill;
}