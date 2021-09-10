// Problem link: http://codeforces.com/contest/265/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int pos = 0;
    string s;
    string t;
    cin >> s;
    cin >> t;
    for (int i=0 ; t[i]!='\0' && s[pos]!='\0' ;i++)
    {
        if(s[pos] == t[i])
            pos++;
    }
    cout << pos+1 << endl;
    return 0;
}