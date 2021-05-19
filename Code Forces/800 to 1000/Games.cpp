// Problem link: http://codeforces.com/contest/268/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n;
    int counter = 0;
    cin >> n;
    int host[n];
    int guest[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> host[i] >> guest[i];
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if(host[i] == guest[j])
                counter++;
        }
    }
    cout << counter << endl;
    return 0;
}