// Problem link: https://codeforces.com/problemset/problem/902/A

#include <bits/stdc++.h>

#define kill return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int a, b;
    bool road[m + 1]{0};
    while (n--)
    {
        cin >> a >> b;
        if (a == 0)
            road[0] = true;
        
        if(road[a] == true)
        {
            for(int i = a; i <= b; i++)
            {
                road[i] = true;
            }
        }
    }

    for(int i = 0; i <= m; i++)
    {
        if(!road[i])
        {
            cout << "NO" << endl;
            kill;
        }
    }
    cout << "YES" << endl;
    return 0;
}