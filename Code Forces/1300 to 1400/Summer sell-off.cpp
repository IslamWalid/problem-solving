//Problem link: https://codeforces.com/contest/810/problem/B

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
    int n, f; cin >> n >> f;
    int arr[n];
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        int k, l;
        cin >> k >> l;
        sum += min(k, l);
        arr[i] = min(2 * k, l) - min (k, l);
    }
    sort(arr, arr + n, greater<>());
    for (int i = 0; i < f; i++)
        sum += arr[i];

    cout << sum << endl;
    kill;
}