// Problem link: http://codeforces.com/contest/47/problem/B

#include <bits/stdc++.h>

#define kill return 0
#define space " "
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    IO;
    string s[3];
    int cnt[3] {0};
    for (int i = 0; i < 3; i++)
        cin >> s[i];
    
    for (int i = 0; i < 3; i++)
    {
        if (s[i][1] == '<')
            cnt[s[i][2] - 'A']++;
        else
            cnt[s[i][0] - 'A']++;
    }

    if (cnt[0] == cnt[1] || cnt[1] == cnt[2] || cnt[0] == cnt[2])
        cout << "Impossible" << endl;
    else
    {
        for (int i = 0; i < 3; i++)
        {
            if (cnt[0] == i)
                cout << 'A';
            else if (cnt[1] == i)
                cout << 'B';
            else
                cout << 'C';
        }
        cout << endl;
    }
    
    return 0;
}