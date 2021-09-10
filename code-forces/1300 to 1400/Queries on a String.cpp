//Problem link: https://codeforces.com/contest/598/problem/B
 
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
    int m; cin >> m;
 
    while (m--) {
        int l, r, k;
        cin >> l >> r >> k;
        string s1, s3;
        deque<char> s2;
        s1 = s.substr(0, l - 1);
        s3 = s.substr(r, s.length() - r + 1);
        for (int i = l - 1; i < r; i++)
            s2.push_back(s[i]);
 
        while (k--) {
            s2.push_front(s2.back());
            s2.pop_back();
        }
        s = s1;
        while (!s2.empty()) {
            s += string(1, s2.front());
            s2.pop_front();
        }
        s += s3;
    }
    cout << s << endl;
    kill;
}