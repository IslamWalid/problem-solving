// Problem link: http://codeforces.com/contest/791/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int a , b;
    int years = 0;
    cin >> a >> b;
    while(a <= b)
    {
        years++;
        a*=3;
        b*=2;
    }
    cout << years << endl;
    return 0;
}