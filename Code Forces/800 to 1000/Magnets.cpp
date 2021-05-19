// Problem link: http://codeforces.com/contest/344/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n , counter = 1;
    cin >> n;
    int groups[n];
    for(int i=0 ; i<n ; i++)
        cin >> groups[i];
    for(int i=1 ; i<n ; i++)
    {
        if(groups[i] == groups[i-1])
            continue;
        else
            counter++;
    }
    cout << counter << endl;
    return 0;
}