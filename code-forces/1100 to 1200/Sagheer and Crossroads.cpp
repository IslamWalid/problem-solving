// Problem link: https://codeforces.com/problemset/problem/812/A

#include <bits/stdc++.h>

#define kill return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    int l1, s1, r1, p1; cin >> l1 >> s1 >> r1 >> p1;
    int l2, s2, r2, p2; cin >> l2 >> s2 >> r2 >> p2;
    int l3, s3, r3, p3; cin >> l3 >> s3 >> r3 >> p3;
    int l4, s4, r4, p4; cin >> l4 >> s4 >> r4 >> p4;

    if(p1 && (l2 || s3 || r4 || l1 || s1 || r1))
    {
        cout << "YES" << endl;
        kill;
    }
    if(p2 && (r1 || l3 || s4 || l2 || s2 || r2))
    {
        cout << "YES" << endl;
        kill;
    }
    if(p3 && (s1 || r2 || l4 || l3 || s3 || r3))
    {
        cout << "YES" << endl;
        kill;
    }
    if(p4 && (l1 || s2 || r3 || l4 || s4 || r4))
    {
        cout << "YES" << endl;
        kill;
    }
    cout << "NO" << endl;
    return 0;
}