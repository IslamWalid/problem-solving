//Problem link: https://codeforces.com/contest/262/problem/B

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



int main() {
    IO();
    int n, k; cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (k) {
            if (arr[i] < 0) {
                arr[i] *= -1;
                k--;
            }
        }
        sum += arr[i];
    }

    sort(arr, arr + n);
    if (k > 0 && k % 2 == 1)
        sum -= ( 2 * arr[0]);

    cout << sum << endl;

    kill;
}