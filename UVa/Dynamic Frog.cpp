// Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2098

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; ++t)
    {
        int n ,d; cin >> n >> d;
        int stones[n + 1];
        bool is_small[n + 1];
        bool hit[n+1];

        for (int i = 0; i < n; ++i)
        {
            char type, sep;
            cin >> type >> sep >> stones[i];
            is_small[i] = (type == 'S');

            hit[i] = false;
        }

        is_small[n] = false;
        stones[n] = d;
        hit[n] = false;

        int min_distance = stones[0];
        for (int i = 0; i < n; ++i)
        {
            hit[i] = true;
            if (!is_small[i + 1])
            {
                min_distance = max(min_distance, stones[i + 1] - stones[i]);
            }
            else
            {
                min_distance = max(min_distance, stones[i + 2] - stones[i]);
                ++i;
            }
        }

        for (int i = n; i > 0; --i)
        {
            if (!hit[i - 1] || !is_small[i - 1])
            {
                min_distance = max(min_distance, stones[i] - stones[i - 1]);
            }
            else
            {
                if (i != 1)
                    min_distance = max(min_distance, stones[i] - stones[i - 2]);
                else
                    min_distance = max(min_distance, stones[i] - 0);
                --i;
            }
        }

        cout << "Case " << t << ": " << min_distance << '\n';
    }
    return 0;
}