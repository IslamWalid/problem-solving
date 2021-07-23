// Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3836

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
        int n; cin >> n;
        string field; cin >> field;
        int ans = 0;
        for (int i = 0; i < field.length(); i++)
        {
            if (field[i] == '.')
            {
                ans++;
                i += 2;
            }
        }
        cout << "Case " << t << ": " << ans << endl;
    }
    return 0;
}