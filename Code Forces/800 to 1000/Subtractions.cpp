// Problem link: https://codeforces.com/contest/267/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n; cin >> n;
    int l[n], r[n], cnt[n]{0};
    for (int i = 0; i < n; i++)
        cin >> l[i] >> r[i];
    
    for (int i = 0; i < n; i++)
    {
        while (l[i] > 0 && r[i] > 0)
        {
            if (l[i] >= r[i])
            {
                cnt[i] += l[i] / r[i];
                l[i] -= (int)(l[i] / r[i]) * r[i];
            }
            else
            {
                cnt[i] += r[i] / l[i];
                r[i] -= (int)(r[i] / l[i]) * l[i];
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << cnt[i] << endl;
    return 0;
}