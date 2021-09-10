//Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3104

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



int n;
bool visited[100][100];
int di[] = {0, 1, 0, -1};
int dj[] = {1, 0, -1, 0};


bool valid (int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < n;
}

void dfs (string ships[], int i, int j) {
    if (!visited[i][j] && ships[i][j] != '.') {
        visited[i][j] = true;
        for (int k = 0; k < 4; k++) {
            int x = di[k] + i;
            int y = dj[k] + j;
            if (valid(x, y) && !visited[x][y] && ships[x][y] != '.')
                dfs(ships, x, y);
        }
    }
}

int countShips (string ships[]) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[i][j] && ships[i][j] == 'x') {
                cnt++;
                dfs(ships, i , j);
            }
        }
    }
    return cnt;
}

int main() {
    IO();
    int tc; cin >> tc;
    for (int t = 1; t <= tc; t++) {
        cin >> n;
        string ships[n];
        memset(visited, 0, sizeof(visited));

        for (int i = 0; i < n; i++)
            cin >> ships[i];

        printf("Case %d: %d\n", t, countShips(ships));
    }
    
    kill;
}