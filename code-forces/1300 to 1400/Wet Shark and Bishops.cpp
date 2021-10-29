//Problem link: https://codeforces.com/contest/621/problem/B

#include <bits/stdc++.h>

#define kill return 0
#define PI  3.14159265358979323846
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void IO() {
    #ifdef LOCAL_MACHINE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}



int main() {
    IO();
    int n; cin >> n;
    map<int, int> addition, subtraction;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        cnt += addition[a+b];
        addition[a+b]++;

        cnt += subtraction[a-b];
        subtraction[a-b]++;

    }

    cout << cnt << endl;

    kill;
}