// Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2515

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int t = 1; t <= T; t++)
    {
        int n; cin >> n;
        string grid[n];
        for (int i = 0; i < n; i++)
            cin >> grid[i];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == '.')
                {
                    char left = (j == 0) ? '.' : grid[i][j - 1];
                    char above = (i == 0) ? '.' : grid[i - 1][j];
                    char right = (j == n - 1) ? '.' : grid[i][j + 1];
                    char below = (i == n - 1) ? '.' : grid[i + 1][j];

                    for (char cur = 'A'; cur <= 'Z'; cur++) {
                        if (cur != left && cur != above && cur != right && cur != below) {
                            grid[i][j] = cur;
                            break;
                        }
                    }
                }
            }
        }

        cout << "Case " << t << ":" << endl;
        for (int i = 0; i < n; i++)
            cout << grid[i] << endl;
    }
    return 0;
}