// Problem link: https://codeforces.com/contest/463/problem/B

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
    int n; cin >> n;
    int e, d = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    e = 0 - arr[0];
    for (int i = 0; i < n; i++)
    {
        if (e < 0)
        {
            d -= e;
            e = 0;
        }
        e += (arr[i] - arr[i+1]);
    }
    cout << d << endl;
    return 0;
}