// Problem link: https://codeforces.com/contest/782/problem/A

#include <bits/stdc++.h>

#define kill return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    int n; cin >> n;
    int cnt = 0;
    int result = 0;
    int table[2*n];
    bool hash[2*n]{0};

    for(int i = 0; i < 2*n; i++)
    {
        cin >> table[i];
        if(!hash[table[i]-1])
        {
            hash[table[i]-1] = true;
            cnt++;
        }
        else
        {
            hash[table[i]-1] = false;
            cnt--;
        }
        if(cnt > result)
            result = cnt;
    }
    cout << result << endl;
    return 0;
}