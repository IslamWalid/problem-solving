//Problem link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=1402

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


bool visited[501];

int dfs (int job, vector<vector<int>> &graph, int time[]) {
    if (!visited[job]) {
        visited[job] = true;
        
        int total = time[job - 1];
        for (auto child: graph[job])
            total += dfs(child, graph, time);
        return total;
    }
    return 0;
}

int main() {
    IO();
    int v, e;
    int t = 1;
    while (cin >> v >> e && v != 0) {
        int totalWork = 0;
        int time[v];
        vector<vector<int>> g(v + 1);
        vector<vector<int>> rg(v + 1);
    
        for (int i = 0; i < v; i++) {
            cin >> time[i];
            totalWork += time[i];
        }
        
        for (int i = 0; i < e; i++) {
            int x, y; cin >> x >> y;
            g[x].push_back(y);
            rg[y].push_back(x);
        }

        printf("Case #%d:\n", t++);

        int q;
        cin >> q;
        while (q--) {
            int job;
            cin >> job;

            memset(visited, false, sizeof(visited));
            int ch1 = dfs(job, g, time);

            memset(visited, false, sizeof(visited));
            int ch2 = totalWork - dfs(job, rg, time) + time[job - 1];

            printf("%d\n", ch2 - ch1);

        }

        printf("\n");
    }

    kill;
}