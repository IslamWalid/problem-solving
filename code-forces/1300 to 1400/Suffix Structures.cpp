//Problem link: https://codeforces.com/contest/448/problem/B

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
    map<char, int> scnt, tcnt;
    bool automat = false, arr = false;
    
    int n = s.length(),
        m = t.length();

    for (auto c: s)
        scnt[c]++;

    for (auto c: t)
        tcnt[c]++;

    for (int i = 0; i < m; i++) {
        if (tcnt[t[i]] > scnt[t[i]]) {
            cout << "need tree" << endl;
            kill;
        }
    }

    if (n > m) {
        automat = true;

        int i, j;
        for (i = 0, j = 0; i < n && j < m; i++) {
            if (s[i] == t[j])
                j++;
        }

        if (j != m)
            arr = true;
    }
    else
        arr = true;

    
    if (arr && automat)
        cout << "both" << endl;
    else if (arr)
        cout << "array" << endl;
    else
        cout << "automaton" << endl;

    kill;
}