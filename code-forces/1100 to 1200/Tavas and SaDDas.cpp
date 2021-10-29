//Problem link: https://codeforces.com/contest/535/problem/B

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
    string n; cin >> n;
    ll index = 0;
    for (int i = 0; i < n.length(); i++) {
        index += pow(2, i);
    }

    int mask = 0;
    for (int i = n.length()-1; i >= 0; i--) {
        if (n[i] == '7')
            mask |= 1 << (n.length() - i - 1);
    }

    index += mask;

    cout << index << endl;
    
    kill;
}