// Problem link: https://codeforces.com/contest/365/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n, k; cin >> n >> k;
    int cnt = 0;
    int number;
    while (n--)
    {
        bool hash[k + 1]{0};
        bool good = true;
        cin >> number;
        while (number)
        {
            hash[number % 10] = true;
            number /= 10;
        }
        for (int i = 0; i < k + 1; i++)
        {
            if(!hash[i])
            {
                good = hash[i];
                break;
            }
        }
        if(good)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}