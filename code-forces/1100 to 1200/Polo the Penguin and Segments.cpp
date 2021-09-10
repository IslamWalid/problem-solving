// Problem link: https://codeforces.com/contest/289/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n, k; cin >> n >> k;
    int l[n];
    int r[n];
    int value = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> l[i] >> r[i];
        value += (r[i] - l[i] + 1);
    }
    cout << ((value % k == 0) ? 0 : k - (value % k)) << endl;
    return 0;
}