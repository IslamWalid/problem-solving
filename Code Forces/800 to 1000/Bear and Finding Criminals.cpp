// Problem link: https://codeforces.com/contest/680/problem/B

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
    int n, l; cin >> n >> l;
    bool cities[n];
    for (int i = 0; i < n; i++)
        cin >> cities[i];

    l--;
    int nav = min(l - 0, n - l - 1);

    int cnt = cities[l];
    int j = l - 1;
    int k = l + 1;
    for (int i = 0; i < nav; i++)
    {
        if (cities[j] && cities[k])
            cnt += 2;
        j--;
        k++;
    }

    for (int i = k; i < n; i++)
        cnt += cities[i];
    for (int i = j; i >=0 ; i--)
        cnt += cities[i];

    cout << cnt << endl;
    return 0;
}