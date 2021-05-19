// Problem link: http://codeforces.com/contest/734/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n;
    int Acount = 0 , Dcount = 0;
    cin >> n;
    char game[n];
    cin >> game;
    for(int i=0 ; i<n ; i++)
    {
        if(game[i] == 'A')
        {
            Acount++;
            if(Acount >= (n/2)+1)
            {
                cout << "Anton\n";
                return 0;
            }
        }
        if(game[i] == 'D')
        {
            Dcount++;
            if(Dcount >= (n/2)+1)
            {
                cout << "Danik\n";
                return 0;
            }
        }
    }
    cout << "Friendship\n";
    return 0;
}