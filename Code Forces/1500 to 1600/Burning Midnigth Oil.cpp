// Problem link: https://codeforces.com/contest/165/problem/B

#include <bits/stdc++.h>

#define kill return 0
#define space " "
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int sum (int n, int k)
{
    int result = 0;
    int i = 0;
    while (floor(n/pow(k, i)))
    {
        result += floor(n/pow(k, i++));
    }
    return result;
}

int main()
{
    IO;
    int n, k; cin >> n >> k;
    int st = 1, en = n, md;
    int good = 0;
    while (st <= en){
        md = (st + en) / 2;
        if (sum(md, k) >= n) {
            good = md;
            en = md - 1;
        }
        else
            st = md + 1;
    }
    cout << good << endl;
    return 0;
}