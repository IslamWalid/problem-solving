//Problem link: https://codeforces.com/contest/276/problem/B

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
    string s;
    cin >> s;
    int freq[26] {0};
    for (auto ch: s)
        freq[ch - 'a']++;

    int odd = 0;
    for (auto ch: s) {
        if (freq[ch - 'a'] % 2 != 0)
            odd++;
    }

    if (odd == 0 || odd % 2 == 1)
        cout << "First" << endl;
    else
        cout << "Second" << endl;

    kill;
}