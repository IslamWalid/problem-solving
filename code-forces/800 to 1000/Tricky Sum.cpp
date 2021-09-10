//Problem link: https://codeforces.com/contest/598/problem/A

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
    int t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        ll sum = (n * (n+1)) / 2;
        ll a = 1;
        while (a <= n) {
            sum -= 2 * a;
            a *= 2;
        }
        cout << sum << endl;
    }
    kill;
}