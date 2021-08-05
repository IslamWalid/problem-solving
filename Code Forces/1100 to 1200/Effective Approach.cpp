//Problem link: https://codeforces.com/contest/227/problem/B

#include <bits/stdc++.h>

#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define kill return 0
#define PI  3.14159265358979323846
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
    IO;
    int n; cin >> n;
    int elements[n];
    int positions[100001];
    for (int i = 0; i < n; i++) {
        cin >> elements[i];
        positions[elements[i]] = i;
    }

    int q;
    cin >> q;
    int targets[q];
    ll vasya = 0, petya = 0;
    for (int i = 0; i < q; i++) {
        cin >> targets[i];
        vasya += positions[targets[i]] + 1;
        petya += n - positions[targets[i]];
    }
    cout << vasya << space << petya << endl;
    kill;
}