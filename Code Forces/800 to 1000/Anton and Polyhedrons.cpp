// Problem link: https://codeforces.com/contest/785/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n;
    int faces = 0;
    string s;
    cin >> n;
    while (n--)
    {
        cin >> s;
        if (s[0] == 'T')
            faces += 4;
        else if(s[0] == 'C')
            faces += 6;
        else if(s[0] == 'O')
            faces += 8;
        else if(s[0] == 'D')
            faces += 12;
        else if(s[0] == 'I')
            faces += 20;
    }
    cout << faces << endl;
    return 0;
}