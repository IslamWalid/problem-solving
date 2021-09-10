//Problem link: https://codeforces.com/contest/400/problem/B

#include <bits/stdc++.h>

#define kill return 0
#define PI  3.14159265358979323846
#define space ' '
#define MOD 1000000007

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
    int n, m; cin >> n >> m;
    string lines[n];
    for (int i = 0; i < n; i++)
        cin >> lines[i];

    
    set <int> s;
    for (int i = 0; i < n; i++) {
        int dist = lines[i].find('S') - lines[i].find('G');
        if (dist > 0) {
            s.insert(dist);
        }
        else {
            cout << -1 << endl;
            kill;
        }
    }

    cout << s.size() << endl;

    kill;
}