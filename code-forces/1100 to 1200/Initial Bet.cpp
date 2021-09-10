// Problem link: https://codeforces.com/problemset/problem/478/A

#include <bits/stdc++.h>

#define kill return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    int c1, c2, c3, c4, c5;
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    int sum = c1 + c2 + c3 + c4 + c5;
    if (sum == 0)
        cout << -1 << endl;
    else if (sum % 5 == 0)
        cout << sum / 5 << endl;
    else
        cout << -1 << endl;
    return 0;
}