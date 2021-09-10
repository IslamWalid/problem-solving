// Problem link: https://codeforces.com/contest/1204/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    string s; cin >> s;
    bool no = true;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            no = false;
            break;
        }
    }

    if (no)
        cout << ceil((double)(s.length() - 1) / 2.0) << endl;
    else
        cout << ceil((double)s.length() / 2.0) << endl;
    return 0;
}