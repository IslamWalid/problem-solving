// Problem link: https://codeforces.com/contest/667/problem/A

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
    int d, h, v, e;
    double de;
    cin >> d >> h >> v >> e;
    de = v / (pow(((double)d/2), 2) * 3.14159265358979323846);
    
    if(de > e)
        cout << "YES\n" << fixed << setprecision(6) << h / (de - e) << endl;
    else
        cout << "NO\n";
    return 0;
}