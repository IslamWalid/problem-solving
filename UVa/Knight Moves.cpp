//Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=380

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



int dx[] = {1, 2, 2, 1, -1, -2, -2, -1};
int dy[] = {2, 1, -1, -2, -2, -1, 1, 2};

int dist[8][8];

bool isValid (int x, int y) {
    return x >= 0 && x < 8 && y >= 0 && y < 8;
}

int bfs(int sr, int sc, int tr, int tc) {
    queue <int> q;
    memset(dist, -1, sizeof(dist));
    dist[sr][sc] = 0;
    q.push(sr);
    q.push(sc);

    while (!q.empty()) {
        int r = q.front(); 
        q.pop();
        int c = q.front(); 
        q.pop();
        if (r == tr && c == tc)
            return dist[r][c];

        for (int i = 0; i < 8; i++) {
            int x = dx[i] + r;
            int y = dy[i] + c;
            if (isValid(x, y)) {
                dist[x][y] = dist[r][c] + 1;
                q.push(x);
                q.push(y);
            }
        }
    }
}

int main() {
    IO();
    string s, t;
    while (cin >> s >> t) {
        int sr = s[1] - '0' - 1;
        int sc = s[0] - 'a';

        int tr = t[1] - '0' - 1;
        int tc = t[0] - 'a';

        printf("To get from %s to %s takes %d knight moves.\n", s.c_str(), t.c_str(), bfs(sr, sc, tr, tc));
    }
    kill;
}