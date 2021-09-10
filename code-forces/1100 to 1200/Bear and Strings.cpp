//Problem link: https://codeforces.com/contest/385/problem/B

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
    string s; cin >> s;
    int n = s.length();
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        bool bear = false;
        for (int j = i + 3; j < n; j++) {
            if (bear || s[j-3] == 'b' && s[j-2] == 'e' && s[j-1] == 'a' && s[j] == 'r') {
                bear = true;
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    kill;
}