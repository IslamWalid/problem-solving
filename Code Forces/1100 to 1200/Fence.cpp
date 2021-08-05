//Problem link: https://codeforces.com/contest/6/problem/B

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
    int n, k;
    cin >> n >> k;
    int fence[n];
    int minSum = 0;
    for (int i = 0; i < n; i++) {
        cin >> fence[i];
        minSum += fence[i];
    }

    int sumArr[n + 1];
    sumArr[0] = 0;
    for (int i = 1; i <= n; i++)
        sumArr[i] = sumArr[i - 1] + fence[i - 1];

    int ans;
    for (int i = 0; i <= n - k; i++) {
        if (sumArr[k + i] - sumArr[i] <= minSum) {
            minSum = sumArr[k + i] - sumArr[i];
            ans = i + 1;
        }
    }
    cout << ans << endl;

    kill;
}