// Problem link: https://codeforces.com/contest/770/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n, k;
    cin >> n >> k;
    for (int i = 0, j = 0; i < n; i++)
    {
        cout << (char)('a' + j);
        j = (j + 1) % k;
    }
    cout << endl;
    return 0;
}