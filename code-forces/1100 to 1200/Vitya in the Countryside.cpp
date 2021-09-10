// Problem link: https://codeforces.com/problemset/problem/719/A

#include <bits/stdc++.h>

#define kill return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    int n; cin >> n;
    int moon[n];
    for(int i = 0; i < n; i++)
        cin >> moon[i];

    if(moon[n-1] == 0)
        cout << "UP" << endl;
    else if(moon[n-1] == 15)
        cout << "DOWN" << endl;
    else if(n > 1 && moon[n-1] - moon[n-2] > 0)
        cout << "UP" << endl;
    else if(n > 1 && moon[n-1] - moon[n-2] < 0)
        cout << "DOWN" << endl;
    else
        cout << -1 << endl;

    return 0;
}