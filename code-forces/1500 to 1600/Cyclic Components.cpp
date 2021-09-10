//Problem link: https://codeforces.com/contest/977/problem/E

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


const int N = 200009;
int deg[N];
vector<vector<int>> graph (N);
vector<bool> visited (N);
vector<int> comp;

void dfs (int node) {
    if (!visited[node]) {
        visited[node] = true;
        comp.push_back(node);
        for (auto child: graph[node])
            dfs(child);
    }
}

int main() {
    IO();
    int n, m; cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
        deg[x]++;
        deg[y]++;
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            comp.clear();
            dfs(i);
            bool ok = true;
            for (auto node: comp) {
                if (deg[node] != 2) {
                    ok =false;
                    break;
                }
            }
            if (ok)
                cnt++;
        }
    }

    cout << cnt << endl;

    kill;
}