// Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1655

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {
        int l, n; cin >> l >> n;
        int ants[n],
            minimum = 0,
            maximum = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> ants[i];
            minimum = max(minimum, min(ants[i], l - ants[i]));
            maximum = max(maximum, max(ants[i], l - ants[i]));
        }
        cout << minimum << space << maximum << endl;
    }
    return 0;
}