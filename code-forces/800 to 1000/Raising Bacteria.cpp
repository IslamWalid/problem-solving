// Problem link: https://codeforces.com/contest/579/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    unsigned long long n; cin >> n;
    unsigned long long cnt = 0;
    while (n)
    {
        cnt += (n % 2 == 1);
        n = n >> 1;
    }
    cout << cnt << endl;
    return 0;
}