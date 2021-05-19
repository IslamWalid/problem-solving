// Problem link: http://codeforces.com/contest/732/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int k, r, n = 1;
    cin >> k >> r;
    int temp = k;
    while (temp % 10 != r && temp % 10 != 0)
    {
        n++;
        temp = k * n;
    }
    cout << n << endl;
    return 0;
}