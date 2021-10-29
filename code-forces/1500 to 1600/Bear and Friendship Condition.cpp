//Problem link: https://codeforces.com/contest/791/problem/B

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


int n, m;
int vertices, edges;
const int N = 150005;
bool visited[N];
vector<int> friends[N];

void dfs (int node) {
    if (!visited[node]) {
        visited[node] = true;
        vertices++;
        edges += friends[node].size();
        for (auto child: friends[node]) {
            if (!visited[child])
                dfs(child);
        }
    }
}

int main() {
    IO();
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        friends[a].push_back(b);
        friends[b].push_back(a);
    }

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            vertices = 0, edges = 0;
            dfs(i);
            if (edges != 1ll * vertices * (vertices-1)) {
                cout << "NO" << endl;
                kill;
            }
        }
    }
    cout << "YES" << endl;

    kill;
}