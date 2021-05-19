// Problem link: https://codeforces.com/contest/514/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    string n; cin >> n;
    for (int i = 0; i < n.length(); i++)
    {
        if (i == 0 && n[i] == '9') continue;
        if (n[i] >= '5')
            n[i] = ('9' - n[i]) + '0';
    }
    cout << n << endl;
    return 0;
}