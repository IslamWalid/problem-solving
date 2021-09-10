// Problem link: https://codeforces.com/problemset/problem/560/A

#include <bits/stdc++.h>

#define kill return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    int n; cin >> n;
    int banknotes[n];
    for(int i = 0; i < n; i++)
    {
        cin >> banknotes[i];
        if(banknotes[i] == 1)
        {
            cout << -1 << endl;
            kill;
        }
    }
    cout << 1 << endl;
    return 0;
}