//Problem link: https://codeforces.com/contest/369/problem/B

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
    int n, k, l, r, sn, sk;
    cin >> n >> k >> l >> r >> sn >> sk;
    int arr[n];

    
    int rem = sk % k;

    for (int i = 0; i < k; i++) {
        arr[i] = sk / k + (rem > 0);
        rem--;
    }

    if (k < n) {
        sn -= sk;
        rem = sn % (n-k);
    }

    for (int i = k; i < n; i++) {
        arr[i] = sn / (n-k) + (rem > 0);
        rem--;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << space;
    }
    cout << endl;

    kill;
}