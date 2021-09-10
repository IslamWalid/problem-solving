// Problem link: http://codeforces.com/contest/236/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    string s;
    int pos;
    cin >> s;
    for(int i=0 , n=s.length() ; i<n ; i++)
    {
        pos=0;
        while(pos!=-1)
        {
            pos=s.find(s[i],i+1);
            if(pos!=-1)
                s.erase(pos,1);
            else continue;
        }
    }
    if(s.length()%2==0)
        cout << "CHAT WITH HER!\n";
    else
        cout << "IGNORE HIM!\n";
    return 0;
}