//Problem link: https://codeforces.com/contest/714/problem/B

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
    int n; cin >> n;
    set <int> s;
    for (int i = 0; i < n; i++) {
        int t; cin >> t;
        s.insert(t);
    }

    if (s.size() < 3)
        cout << "YES" << endl;
    else if (s.size() == 3) {
        vector<int> v;
        for (auto i: s)
            v.push_back(i);
        
        if (2 * v[1] == v[0] + v[2])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
        cout << "NO" << endl;

    kill;
}