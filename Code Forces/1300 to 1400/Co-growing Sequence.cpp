//Problem link: https://codeforces.com/contest/1547/problem/D

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
        int n; cin >> n;
        int x[n];
        int y[n];
        y[0] = 0;
        for (int i = 0; i < n; i++)
            cin >> x[i];

        for (int i = 1; i < n; i++) {
            int prev = x[i - 1] ^ y[i - 1];
            y[i] = prev & ~x[i];
        }
        for (auto elem : y)
            cout << elem << space;
        cout << endl;
    }
    kill;
}