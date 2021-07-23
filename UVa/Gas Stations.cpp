// Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3743

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
    int l, g; cin >> l >> g;

    while (l && g)
    {
        int x, r, t1, t2;
        vector <pair<int, int>> s;
        for (int i = 0 ; i < g; i++)
        {
            cin >> x >> r;
            t1 = x - r;
            t2 = x + r;

            if (t1 < 0)
                t1 = 0;
            if (t2 > l)
                t2 = l;

            s.push_back(make_pair(t1, t2));
        }

        sort(s.begin(), s.end());

        int i = 0,
            start = 0,
            cnt = 0;

        while (start < l) {
            int maxi = start;
            while (i < g && s[i].first <= start)
                maxi = max(maxi, s[i++].second);

            if (maxi == start)
                break;
            start = maxi;
            cnt++;
        }

        if (start < l)
            cout << -1 << endl;
        else
            cout << g - cnt << endl;
        
        cin >> l >> g;
    }
    return 0;
}