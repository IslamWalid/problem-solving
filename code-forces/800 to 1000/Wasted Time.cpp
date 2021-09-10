// Problem link: https://codeforces.com/contest/127/problem/A

#include <bits/stdc++.h>

#define kill return 0
#define space " "
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

double distance(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(y1-y2, 2) + pow(x1-x2, 2));
}

int main()
{
    IO;
    int n, k; cin >> n >> k;
    int x[n], y[n];
    double d = 0.0;
    for (int i = 0; i < n; i++)
        cin >> x[i] >> y[i];

    for (int i = 0; i < n - 1; i++)
        d += distance(x[i], y[i], x[i+1], y[i+1]);
    
    cout << fixed << setprecision(6) << (d / 50.0) * k << endl;
    return 0;
}