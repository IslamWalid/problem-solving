// Problem link: http://codeforces.com/contest/231/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() 
{
     int n;
    int sure = 0;
    int solved = 0;
    cin >> n;
    int problems[n][3];
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<3 ; j++)
            cin >> problems[i][j];
    }
 
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            if(problems[i][j] == 1)
                sure++;
        }
        if(sure >=2)
            solved++;
        sure =0;
    }
    cout << solved << endl;
    return 0;
}