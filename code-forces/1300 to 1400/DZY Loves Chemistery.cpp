//Problem link: http://codeforces.com/contest/445/problem/B

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

const int N = 55;

int n, m;
bool visited[N];
int graph[N][N];

void dfs (int node) {
    if (!visited[node]) {
        visited[node] = true;

        for (int i = 1; i <= n; i++) {
            if (!visited[i] && graph[node][i])
                dfs(i);
        }
    }
}

int main() {
    IO();
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        graph[a][b] = graph[b][a] = 1;
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            dfs(i);
            cnt++;
        }
    }
    ll ans = pow(2, n - cnt);
    cout << ans << endl;
    kill;
}