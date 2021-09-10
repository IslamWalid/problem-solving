// Problem link: http://codeforces.com/contest/812/problem/C

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
    int n;
    ll s;
    cin >> n >> s;
    int base_cost[n];
    for (int i = 0; i < n; ++i)
        cin >> base_cost[i];

    int low = 0,
        high = n - 1;

    ll ans = 0;
    int mid, k = 0;

    while (low <= high) {
        mid = (low + high) / 2;
        vector<ll> costs;
        for (int i = 0; i < n; ++i)
            costs.push_back(base_cost[i] + (ll) (i + 1) * (mid + 1));

        sort(costs.begin(), costs.end());

        ull sum = 0;
        for (int i = 0; i < mid + 1; ++i)
            sum += costs[i];

        if (sum <= s) {
            low = mid + 1;
            ans = sum;
            k = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    cout << k << space << ans << endl;

    terminate;
}