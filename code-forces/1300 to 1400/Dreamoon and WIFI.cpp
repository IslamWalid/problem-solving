//Problem link: http://codeforces.com/contest/476/problem/B

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
    string s1, s2; cin >> s1 >> s2;
    int end = 0;
    for (auto ins: s1) {
        if (ins == '+')
            end++;
        else
            end--;
    }

    int unknown = 0;
    for (auto ch: s2) {
        if (ch == '?')
            unknown++;
    }

    if (unknown != 0) {
        int combinations = 1 << unknown;
        int matches = 0;

        for (int mask = 0; mask < combinations; mask++) {
            int tmask = mask;
            string ts2 = s2;
            for (int i = 0; i < ts2.length(); i++) {
                if (ts2[i] == '?') {
                    if (tmask & 1 == 1)
                        ts2[i] = '+';
                    else
                        ts2[i] = '-';
                    tmask >>= 1;
                }
            }

            int dist = 0;
            for (auto ch: ts2) {
                if (ch == '+')
                    dist++;
                else
                    dist--;
            }

            if (dist == end)
                matches++;
        }
        
        cout << fixed << setprecision(9) << (double) matches / combinations << endl;
    }
    else {
        int dist = 0;
        for (auto ch: s2) {
            if (ch == '+')
                dist++;
            else
                dist--;
        }
        if (dist == end)
            cout << fixed << setprecision(9) << 1.0 << endl;
        else
            cout << fixed << setprecision(9) << 0.0 << endl;
    }

    kill;
}