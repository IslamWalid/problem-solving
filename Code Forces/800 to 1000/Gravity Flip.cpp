// Problem link: http://codeforces.com/contest/405/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    int columns[n];
    for(int i=0 ; i<n ; i++)
        cin >> columns[i];
    sort(columns, columns + n);
    for(int i=0 ; i<n ; i++)
        cout << columns[i] << " ";
    cout << endl;
    return 0;
}