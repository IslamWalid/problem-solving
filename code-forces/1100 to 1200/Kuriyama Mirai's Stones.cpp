//Problem link: https://codeforces.com/contest/433/problem/B

#include <bits/stdc++.h>

#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define kill return 0
#define PI  3.14159265358979323846
#define space ' '
#define MOD 1000000007

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
    IO;
    int n; cin >> n;
    int stones[n];
    int cost[n];
    for (int i = 0; i < n; i++) {
        cin >> stones[i];
        cost[i] = stones[i];
    }
    sort(cost, cost + n);

    ull sumArray[n + 1];
    ull costSumArray[n + 1];
    sumArray[0] = costSumArray[0] = 0;

    for (int i = 1; i <= n; i++) {
        sumArray[i] = sumArray[i - 1] + stones[i - 1];
        costSumArray[i] = costSumArray[i - 1] + cost[i - 1];
    }

    int m; cin >> m;
    while (m--) {
        int command; cin >> command;
        int l, r; cin >> l >> r;

        if (command == 1) {
            cout << sumArray[r] - sumArray[l - 1] << endl;
        }
        else {
            cout << costSumArray[r] - costSumArray[l - 1] << endl;
        }
    }

    kill;
}