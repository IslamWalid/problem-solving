// Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2708

#include <bits/stdc++.h>

#define kill return 0
#define space " "
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    IO;
    int l; cin >> l;
    string way;
    int minDistance;
    int k, temp;
    while (l)
    {
        cin >> way;
        minDistance = INT_MAX;
        if (way.find('Z') != string::npos)
        {
            cout << 0 << endl;
            cin >> l;
            continue;
        }

        for (int i = 0; i < l; i++)
        {
            if (way[i] == 'R' || way[i] == 'D') {
                k = i;
                break;
            }
        }

        while (k != -1)
        {
            if (way[k] == 'R')
            {
                for (int i = k; i < l; i++)
                {
                    if (way[i] == 'R')
                        k = i;
                    else if (way[i] == 'D')
                        break;
                }
                temp = way.find('D', k);
                if (temp - k < minDistance && temp != -1)
                    minDistance = temp - k;
            }
            else
            {
                for (int i = k; i < l; i++)
                {
                    if (way[i] == 'D')
                        k = i;
                    else if (way[i] == 'R')
                        break;
                }
                temp = way.find('R', k);
                if (temp - k < minDistance && temp != -1)
                    minDistance = temp - k;
            }
            k = temp;
        }
        cout << minDistance << endl;
        cin >> l;
    }

    return 0;
}