// Problem link: http://codeforces.com/contest/263/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() 
{
     int mat[5][5];
    int x , y ;
    for(int i=0 ; i<5 ; i++)
    {
        for(int j=0 ; j<5 ; j++)
        {
            cin >> mat[i][j];
            if(mat[i][j])
            {
                x = i;
                y = j;
            }
        }
    }
    x = abs(x-2);
    y = abs(y-2);
    cout << x+y << endl;
    return 0;
}