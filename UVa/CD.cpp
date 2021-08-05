// Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2949

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int cd;

    while (n != 0 || m != 0) {
        int cnt = 0;
        unordered_set <int> jack;
        while (n--) {
            cin >> cd;
            jack.insert(cd);
        }

        while (m--) {
            cin >> cd;
            if (jack.count(cd) == 1)
                cnt++;
        }
        cout << cnt << endl;
        cin >> n >> m;
    }

    return 0;
}