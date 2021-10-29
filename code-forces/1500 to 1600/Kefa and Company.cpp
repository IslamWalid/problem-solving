//Problem link: https://codeforces.com/contest/580/problem/B

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
    int n, d; cin >> n >> d;
    vector<pair<ll, ll>> friends;
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        friends.push_back({a, b});
    }

    sort(friends.begin(), friends.end());

    ll total = 0, max_total = 0;

    int i = 0, j = 0;
    while (i < n && j < n) {
        if (friends[i].first - friends[j].first < d) {
            total += friends[i].second;
            i++;
        }
        else {
            total -= friends[j].second;
            j++;
        }
        max_total = max(total, max_total);
    }

    cout << max_total << endl;
    
    kill;
}