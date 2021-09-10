//Problem link: https://codeforces.com/contest/282/problem/B

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
    int n; cin >> n;
    string res;
    int sum = 0;
    while (n--) {
        int a, g; cin >> a >> g;
        if (sum + a <= 500) {
            res += string (1, 'A');
            sum += a;
        }
        else {
            res += string (1, 'G');
            sum -= g;
        }
    }
    cout << res << endl;
    kill;
}