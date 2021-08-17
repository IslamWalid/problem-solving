//Problem link: https://codeforces.com/contest/216/problem/B

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


vector<bool> visited;
vector<vector<int>> graph;

bool dfs (int cur_node, int par_node, int &cnt) {
    if (!visited[cur_node]) {
        visited[cur_node] = true;

        for (auto child_node :graph[cur_node]) {
            if (child_node != par_node) {
                cnt++;
                if (dfs(child_node, cur_node, cnt))
                    return true;
            }
        }
        return false;
    }
    return true;
}

int main() {
    IO();
    int n, m;
    cin >> n >> m;
    
    visited = vector <bool> (n + 1);
    graph = vector<vector<int>> (n + 1);

    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    int removeCnt = 0;

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            int cnt = 0;

            bool cycle = dfs(i, -1, cnt);

            if (cycle && cnt % 2 == 1)
                removeCnt++;

        }
    }

    if ((n - removeCnt) % 2 == 1)
            removeCnt++;

    cout << removeCnt << endl;

    kill;
}