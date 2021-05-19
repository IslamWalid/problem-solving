// Problem link: http://codeforces.com/contest/59/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int low = 0 , up = 0;
    string s;
    cin >> s;
    for(int i=0 ; s[i] != '\0' ;i++)
        isupper(s[i]) ? up++ : low++;
    if(low >= up)
    {
        for(int i=0 ; s[i] != '\0' ; i++)
            cout << (char)tolower(s[i]);
    }
    else
    {
        for(int i=0 ; s[i] != '\0' ; i++)
            cout << (char)toupper(s[i]);
    }
    cout << endl;
    return 0;
}