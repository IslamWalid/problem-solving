//Problem link: https://codeforces.com/contest/186/problem/B

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


bool comp (pair<int, double> &a, pair<int, double> &b) {
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}

int main() {
    IO();
    int n;
    double t1, t2, k;
    cin >> n >> t1 >> t2 >> k;
    k = 100 - k;
    k /= 100;

    vector<pair <int, double>> standings;
    for (int i = 0; i < n; i++) {
        double v, u; cin >> v >> u;

        double h1 = t1 * v * k + u * t2;
        double h2 = t1 * u * k + v * t2;

        standings.push_back({i + 1, max(h1, h2)});
    }

    sort(standings.begin(), standings.end(), comp);

    for (auto contestant: standings)
        cout << contestant.first << space << fixed << setprecision(2) << contestant.second << endl;

    kill;
}