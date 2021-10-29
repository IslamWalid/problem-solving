//Problem link: https://codeforces.com/contest/716/problem/B

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
    string s; cin >> s;
    int n = s.length();
    if (n < 26) {
        cout << -1 << endl;
        kill;
    }

    set <char> exist;
    set <char> missing;

    bool valid = false;
    for (int i = 0; i < n; i++) {
        string t = s;
        for (int j = i; j < i+26 && j < n; j++) {
            if (s[j] != '?')
                exist.insert(s[j]);
        }

        for (char c = 'A'; c <= 'Z'; c++) {
            if (!exist.count(c))
                missing.insert(c);
        }

        for (int j = i; j < i+26 && j < n; j++) {
            if (s[j] == '?') {
                t[j] = *missing.begin();
                missing.erase(t[j]);
                exist.insert(t[j]);
            }
        }

        if (exist.size() == 26 && missing.size() == 0) {
            valid = true;
            s = t;
            break;
        }

        exist.clear();
        missing.clear();
    }
    

    if (valid) {
        for (int i = 0; i < n; i++) {
            if (s[i] == '?')
                s[i] = 'A';
        }
        cout << s << endl;
    }
    else
        cout << -1 << endl;

    kill;
}