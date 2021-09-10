// Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3051

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
    int T; cin >> T;
    for (int t = 1; t <= T; t++)
    {
        int n, p, q; cin >> n >> p >> q;
        int eggs[n];
        for (int i = 0; i < n; i++)
            cin >> eggs[i];
        
        int sum = 0,
            i = 0;
        
        while (i <= p && sum <= q)
        {
            sum += eggs[i++];
        }
        
        cout << "Case " << t << ": " << i - 1 << endl;
    }
    return 0;
}