// Problem link: https://codeforces.com/contest/218/problem/A
 
#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n, k; cin >> n >> k;
    int points = 2 * n + 1;
    int p[points];
    
    for (int i = 0; i < points; i++)
        cin >> p[i];

    for (int i = 0, j = 0; j < k; i++)
    {
        if (i % 2 != 0)
        {
            if(p[i]-p[i+1] >= 2 && p[i]-p[i-1] >= 2)
            {
                p[i]--;
                j++;
            }
        }
    }

    for (int i = 0; i < points; i++)
        cout << p[i] << " ";
    cout << endl;
    return 0;
}