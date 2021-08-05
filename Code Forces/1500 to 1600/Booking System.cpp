//Problem link: https://codeforces.com/contest/416/problem/C

#include <bits/stdc++.h>

#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define kill return 0
#define PI  3.14159265358979323846
#define space ' '
#define MOD 1000000007

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

bool compare (pair<pair<int, int>, int> &p1, pair<pair<int, int>, int> &p2) {
    return p1.first.second > p2.first.second;
}

int main() {
    IO;
    int n; cin >> n;
    vector<pair<pair<int,int>, int>> groups (n);
    for (int i = 0; i < n; i++) {
        cin >> groups[i].first.first >> groups[i].first.second;
        groups[i].second = i + 1;
    }

    int k; cin >> k;
    vector<pair<int, int>> tables (k);
    for (int i = 0; i < k; i++) {
        cin >> tables[i].first;
        tables[i].second = i + 1;
    }

    sort(groups.begin(), groups.end(), compare);
    sort(tables.begin(), tables.end());

    ll totalAccepted = 0, totalMoney = 0;
    vector<pair<int, int>> res;
    for (auto group: groups) {
        for (int i = 0; i < k; i++) {
            if (group.first.first <= tables[i].first) {
                totalAccepted++;
                totalMoney += group.first.second;
                res.push_back({group.second, tables[i].second});
                tables[i].first = 0;
                break;
            }
        }
    }
    cout << totalAccepted << space << totalMoney << endl;
    for (auto i: res)
        cout << i.first << space << i.second << endl;
    kill;
}