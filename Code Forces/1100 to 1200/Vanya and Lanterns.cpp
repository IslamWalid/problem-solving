//Problem link: https://codeforces.com/contest/492/problem/B

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
    int n, l; cin >> n >> l;
    int lanterns[n];
    for (int i = 0; i < n; i++)
        cin >> lanterns[i];

    sort(lanterns, lanterns + n);

    int d = 0;
    if (lanterns[0] != 0)
        d = lanterns[0] * 2;
    if (lanterns[n - 1] != l)
        d = max(d, (l - lanterns[n - 1]) * 2);
    
    for (int i = 0; i < n - 1; i++) {
        d = max(d, lanterns[i + 1] - lanterns[i]);
    }
    cout << fixed << setprecision(9) << (double) d / 2.0 << endl;
    kill;
}