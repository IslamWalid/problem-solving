//Problem link: https://codeforces.com/contest/510/problem/B

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

const int N = 51, M = 51;
int n, m;
bool circle;
string board[N];
bool visited[N][M];
int di[4] = {-1, 1, 0, 0};
int dj[4] = {0, 0, -1, 1};
int counter = 0;

bool valid (int i, int j) {
    return i >= 0 && j >= 0 && i < n && j < m;
}

void dfs (char color, int i, int j, int pi, int pj) {
    if (color != board[i][j])
        return;
    if (visited[i][j]) {
        circle = true;
        return;
    }
    
    visited[i][j] = true;
    for (int k = 0; k < 4; k++) {
        int ni = di[k] + i;
        int nj = dj[k] + j;
        if (valid(ni, nj) && !(pi == ni && pj == nj))
            dfs(color, ni, nj, i, j);
    }
}

int main() {
    IO();
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> board[i];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!visited[i][j])
                dfs (board[i][j], i, j, -1, -1);
        }
    }

    cout << (circle ? "Yes" : "No") << endl;

    kill;
}