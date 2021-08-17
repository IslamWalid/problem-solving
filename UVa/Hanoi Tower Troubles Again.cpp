//Problem link: https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1217

#include <bits/stdc++.h>

#define kill return 0
#define PI  3.14159265358979323846
#define space ' '
#define MOD 1000000007

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void IO() {
    #ifdef LOCAL_MACHINE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

bool is_square(int val) {
    int sq = sqrt(val);
    return (sq * sq == val);
}

int main() {
    IO();
    int tc; cin >> tc;
    while (tc--) {
        int n; cin >> n;
        vector<int> v[n];

        int cnt = 0;
        while (true) {
            bool flag = false;

            for (int i = 0; i < n; i++) {
                if (!v[i].empty()) {
                    if (is_square(v[i].back() + cnt + 1)) {
                        cnt++;
                        v[i].push_back(cnt);
                        flag = true;
                        break;
                    }
                }
                else {
                    cnt++;
                    v[i].push_back(cnt);
                    flag = true;
                    break;
                }
            }

            if (!flag)
                break;        
        }
        cout << cnt << endl;
    }
    kill;
}