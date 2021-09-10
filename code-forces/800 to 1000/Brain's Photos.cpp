// Problem link: https://codeforces.com/contest/707/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    char color[n][m];
    bool cyan = false, yellow = false, magenta = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> color[i][j];
            switch (color[i][j])
            {
            case 'C':
                cyan = true;
                break;

            case 'Y':
                yellow = true;
                break;

            case 'M':
                magenta = true;
                break;
            }
        }
    }

    if (cyan || yellow || magenta)
        cout << "#Color\n";
    else
        cout << "#Black&White\n";
    return 0;
}