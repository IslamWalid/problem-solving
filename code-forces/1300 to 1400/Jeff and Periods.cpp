//Problem link: https://codeforces.com/contest/352/problem/B

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


struct number {
    int diff, last_index;
};


int main() {
    IO();
    int n; cin >> n;
    map <int, number> mp;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        auto cur = mp.find(x);

        if (cur == mp.end()) {
            number n;
            n.diff = 0;
            n.last_index = i;
            mp[x] = n;
        }
        else {
            if (mp[x].diff == 0) {
                mp[x].diff = i - mp[x].last_index;
                mp[x].last_index = i;
            }
            else if (mp[x].diff != -1){
                if (mp[x].diff == i - mp[x].last_index) {
                    mp[x].last_index = i;
                }
                else
                    mp[x].diff = -1;
            }
        }
    }

    int unvalid = 0;
    for (auto it: mp) {
        if (it.second.diff == -1)
            unvalid++;
    }

    cout << mp.size() - unvalid << endl;
    for (auto it: mp) {
        if (it.second.diff != -1)
            cout << it.first << space << it.second.diff << endl;
    }

    kill;
}