//Problem link: https://codeforces.com/contest/766/problem/B

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
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort (arr, arr + n);

    for (int i = 0; i < n - 2; i++) {
        if (arr[i] + arr[i+1] > arr[i + 2]) {
            cout << "YES" << endl;
            kill;
        }
    }
    cout << "NO" << endl;
    kill;
}