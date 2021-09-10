// Problem link: https://codeforces.com/contest/1237/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n; cin >> n;
    int rates[n];
    int modified[n];
    int sign = 0;
    int remain = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> rates[i];
        modified[i] = rates[i] / 2;
        remain += modified[i];
    }
    sign = (remain >= 0) ? 1 : -1;
    remain = abs(remain);
    
    for (int i = 0; i < n; i++)
    {
        if (remain == 0)
            break;
        if (sign == 1)
        {
            if (rates[i] % 2 != 0 && rates[i] < 0)
            {
                modified[i]--;
                remain--;
            }
        }
        else
        {
            if (rates[i] % 2 != 0 && rates[i] > 0)
            {
                modified[i]++;
                remain--;
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << modified[i] << endl;
    return 0;
}