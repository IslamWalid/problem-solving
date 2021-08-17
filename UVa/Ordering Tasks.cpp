//Problem link: https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1246

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



int n, m;
vector <vector<int>> graph;
vector <bool> visited;
deque<int> res;

void dfs (int node) {
    if (!visited[node]) {
        visited[node] = true;
        for (auto child: graph[node]) {
            if (!visited[child]) {
                dfs(child);
            }
        }
        res.push_front(node);
    }
}

int main() {
    IO();
    cin >> n >> m;
    while (n) {
        graph = vector <vector<int>>(n + 1);
        visited = vector <bool>(n + 1);


        for (int i = 0; i < m; i++) {
            int x, y; cin >> x >> y;
            graph[x].push_back(y);
        }

        for (int i = 1; i <= n; i++)
            dfs(i);
        
        for (int i = 0; i < res.size() - 1; i++)
            cout << res[i] << space;
        cout << res[res.size() - 1] << endl;
        res.clear();

        cin >> n >> m;
    }

    kill;
}