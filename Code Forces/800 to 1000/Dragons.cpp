// Problem link: http://codeforces.com/contest/230/problem/A

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
    int s, n; cin >> s >> n;
    vector <pair <int, int>> level;
    int x, y;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        level.push_back(make_pair(x, y));
    }

    sort(level.begin(), level.end());

    for (auto l: level) {
        if (s > l.first)
            s += l.second;
        else {
            cout << "NO" << endl;
            terminate;
        }
    }
    cout << "YES" << endl;
    return 0;
}