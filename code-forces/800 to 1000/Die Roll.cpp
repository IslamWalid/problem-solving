// Problem link: http://codeforces.com/contest/9/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int y, w;
    cin >> y >> w;
    int r = 7 - max(y,w);
    int gcd = __gcd(r, 6);
    cout << r / gcd << "/" << 6 / gcd << endl;
    return 0;
}