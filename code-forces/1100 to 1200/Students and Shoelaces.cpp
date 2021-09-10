//Problem link: http://codeforces.com/contest/129/problem/B

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
    int n, m; cin >> n >> m;
    vector <set<int>> laces (n+1);
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        laces[a].insert(b);
        laces[b].insert(a);
    }

    int cnt = 0;
    while (true) {
        vector <int> group;
        for (int v = 1; v <=n; v++) {
            if (laces[v].size() == 1)
                group.push_back(v);
        }

        for (int i = 0; i < group.size(); i++) {
            auto it = laces[group[i]].begin();
            laces[group[i]].clear();
            laces[*it].erase(group[i]);
        }

        if (!group.empty())
            cnt++;
        else
            break;
    }

    cout << cnt << endl;


    kill;
}