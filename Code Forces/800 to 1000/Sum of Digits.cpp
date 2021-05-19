// Problem link: https://codeforces.com/contest/102/problem/B

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
    string n; cin >> n;
    int sum;
    int cnt = 0;
    while (n.length() > 1)
    {
        sum = 0;
        for (int i = 0; i < n.length(); i++)
            sum += n[i] - '0';
        n = to_string(sum);
        cnt++;
    }
    cout << cnt << endl;
    
    return 0;
}