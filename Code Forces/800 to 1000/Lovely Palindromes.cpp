//Problem link: https://codeforces.com/contest/688/problem/B

#include <bits/stdc++.h>

#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define kill return 0
#define PI  3.14159265358979323846
#define space ' '
#define MOD 1000000007

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

bool valid (int i, int j, int n, int m) {
    return (i < n && i >= 0) && (j < m && j >= 0);
}

int main() {
    IO;
    string s1; cin >> s1;
    string s2 = s1;
    reverse(s2.begin(), s2.end());
    cout << s1 + s2 << endl;
    kill;
}