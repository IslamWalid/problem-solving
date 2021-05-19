// Problem link: http://codeforces.com/contest/766/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    string a, b;
    cin >> a >> b;
    if (a.compare(b) == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << max(a.length(), b.length()) << endl;
    }
    return 0;
}