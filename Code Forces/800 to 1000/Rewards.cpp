// Problem link: https://codeforces.com/problemset/problem/448/A

#include <bits/stdc++.h>

#define kill return 0
#define space " "

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    int b1, b2, b3;
    int m1, m2, m3;
    int n;
    cin >> b1 >> b2 >> b3;
    cin >> m1 >> m2 >> m3;
    cin >> n;
    int total_cups = b1 + b2 + b3;
    int total_medals = m1 + m2 + m3;
    n -= (total_cups + 5 - 1) / 5;
    n -= (total_medals + 10 - 1) / 10;
    if(n >= 0)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
    return 0;
}