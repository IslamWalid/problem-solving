// Problem link: http://codeforces.com/problemset/problem/705/A

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
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        if (i % 2 == 0)
            cout << "I hate that ";
        else
            cout << "I love that ";
    }
    if (n % 2 == 0)
        cout << "I love it" << endl;
    else
        cout << "I hate it" << endl;
    return 0;
}