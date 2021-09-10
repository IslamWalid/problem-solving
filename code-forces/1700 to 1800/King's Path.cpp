//Problem link: https://codeforces.com/contest/242/problem/C

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


int dx[] = {1, 0, -1, 0, -1, 1, -1, 1};
int dy[] = {0, 1, 0, -1, -1, 1, 1, -1};
set <pair<int,int>> allowed;
map <pair<int,int>, int> len;

bool isvalid(int x, int y) {
    return x >= 1 && x <= 10e9 && y >=1 && y <= 10e9;
}

int bfs (int x1, int y1, int x2, int y2) {
    queue <int> q;
    q.push(x1);
    q.push(y1);
    map<pair<int, int>, int> len;
    len[{x1, y1}] = 0;
    while (!q.empty()) {
        int x = q.front(); q.pop();
        int y = q.front(); q.pop();

        if (x == x2 && y == y2)
            return len[{x, y}];

        for (int i = 0; i < 8; ++i) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (allowed.count({nx, ny}) == 1 && len[{nx, ny}] == 0 && isvalid(nx, ny)) {
                q.push(nx);
                q.push(ny);
                len[{nx, ny}] = len[{x, y}] + 1;
            }
        }
    }
    return -1;
}

int main() {
    IO();
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int n; cin >> n;
    
    for (int i = 0; i < n; i++) {
        int r, a, b;
        cin >> r >> a >> b;
        for (int j = a; j <= b; j++)
            allowed.insert({r, j});
    }
    

    cout << bfs(x1, y1, x2, y2) << endl;

    kill;
}