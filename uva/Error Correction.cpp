// Problem link: https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=482

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
    int n, cols, rows, badRow, badCol, badColCnt, badRowCnt;
    while (cin >> n) {
        if (n == 0)
            break;
        int mat[n][n];
        cols = rows = badRowCnt = badColCnt = 0;
        badCol = badRow = -1;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> mat[i][j];
            }
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                rows += mat[i][j];
                cols += mat[j][i];
            }
            if(rows % 2 != 0) {
                badRow = i;
                badRowCnt++;
            }
            if(cols % 2 != 0) {
                badCol = i;
                badColCnt++;
            }
            rows = cols = 0;
        }
        if(badRowCnt == 0 && badColCnt == 0)
            cout << "OK" << endl;
        else if(badColCnt == 1 && badRowCnt == 1){
            cout << "Change bit (" << badRow + 1 << "," << badCol + 1 << ")" << endl;
        }
        else
            cout << "Corrupt" << endl;
    }

    return 0;
}