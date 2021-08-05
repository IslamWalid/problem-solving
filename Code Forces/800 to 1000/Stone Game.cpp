//Problem link: https://codeforces.com/contest/1538/problem/A

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
    int tc; cin >> tc;
    while (tc--) {
        int n; cin >> n;
        int i1, i2;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] == 1)
                i2 = i;
            if (arr[i] == n)
                i1 = i;
        }
        if (i1 > i2) {
            int temp = i1;
            i1 = i2;
            i2 = temp;
        }
        int ans = min(i2 + 1, min(n - i1, i1 + 1 + (n - i2)));
        cout << ans << endl;

    }
    kill;
}