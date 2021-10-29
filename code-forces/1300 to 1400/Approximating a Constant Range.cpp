//Problem link: https://codeforces.com/contest/602/problem/B

#include <bits/stdc++.h>

#define kill return 0
#define PI  3.14159265358979323846
#define space ' '

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




int main() {
    IO();
    int n; cin >> n;
    int a; cin >> a;
    deque<int> dq;
    map <int, int> mp;
    mp[a]++;

    size_t ans = 0;
    dq.push_back(a);
    for (int i = 1; i < n; i++) {
        cin >> a;
        mp[a]++;
        dq.push_back(a);
        while (mp.rbegin()->first - mp.begin()->first > 1) {
            mp[dq.front()]--;
            if (mp[dq.front()] == 0)
                mp.erase(dq.front());
            dq.pop_front();
        }

        ans = max(ans, dq.size());
    }

    cout << ans << endl;
    kill;
}