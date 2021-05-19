// Problem link: https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1644

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
    int w, h, n;
    int x1, y1, x2, y2;

    cin >> w >> h >> n;
    while (w != 0 || h != 0 || n != 0) {
        bool board[w][h];
        int emptyCnt = h * w;

        for (int i = 0; i < w; i++) {
            for (int j = 0; j < h; j++)
                board[i][j] = false;
        }

        for (int i = 0; i < n; i++) {
            cin >> x1 >> y1 >> x2 >> y2;

            for (int x = min(x1, x2) - 1; x < max(x1, x2); x++) {
                for (int y = min(y1, y2) - 1; y < max(y1, y2); y++) {
                    if (!board[x][y]) {
                        board[x][y] = true;
                        emptyCnt--;
                    }
                }
            }
        }

        if (emptyCnt == 0)
            cout << "There is no empty spots." << endl;
        else if (emptyCnt == 1)
            cout << "There is one empty spot." << endl;
        else
            cout << "There are " << emptyCnt << " empty spots." << endl;

        cin >> w >> h >> n;
    }

    return 0;
}