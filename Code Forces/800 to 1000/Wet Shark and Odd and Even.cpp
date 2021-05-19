// Problem link: http://codeforces.com/problemset/problem/621/A

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
    int arr[n];
    ull sum = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr+n);
    if (sum % 2 != 0)
    {
        for(int i = 0; i < n; i++)
        {
            if(arr[i] % 2 != 0)
            {
                sum -= arr[i];
                break;
            }
        }
    }
    cout << sum << endl;
    return 0;
}