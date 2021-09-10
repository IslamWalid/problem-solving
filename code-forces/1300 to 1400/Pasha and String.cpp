//Problem link: https://codeforces.com/contest/525/problem/B

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
    string s; cin >> s;
    int n; cin >> n;
    int len = s.length();
    vector<int> a(len + 1, 0);
    for (int i = 0; i < n; i++) {
        int t; cin >> t;
        int start = t;
        int end = len - t + 1;
        a[start]++;
        a[end + 1]--;
    }
    for (int i = 1; i <= len / 2; i++) {
        a[i] += a[i-1];
        if (a[i] % 2 == 1)
            swap(s[i - 1], s[(len - i + 1) - 1]);
    }
    cout << s << endl;
    kill;
}