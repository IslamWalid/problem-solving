// Problem link: https://codeforces.com/contest/799/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t, k, d; cin >> n >> t >> k >> d;
    int firts = ((n + k -1) / k) * t;
    if (firts - d > t)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}