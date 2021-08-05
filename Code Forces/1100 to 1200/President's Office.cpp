//Problem link: https://codeforces.com/contest/363/problem/B

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
    int n, m;
    char c;
    cin >> n >> m >> c;
    string office[n];
    for (int i = 0; i < n; i++)
        cin >> office[i];

    unordered_set<char> s;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (office[i][j] == c) {
                if (valid(i - 1, j, n, m) && office[i - 1][j] != c)
                    s.insert(office[i - 1][j]);
                if (valid(i + 1, j, n, m) && office[i + 1][j] != c)
                    s.insert(office[i + 1][j]);

                if (valid(i, j - 1, n, m) && office[i][j - 1] != c)
                    s.insert(office[i][j - 1]);
                if (valid(i, j + 1, n ,m) && office[i][j + 1] != c)
                    s.insert(office[i][j + 1]);
            }
        }
    }
    cout << s.size() - s.count('.') << endl;

    kill;
}