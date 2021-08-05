//Problem link: https://codeforces.com/contest/1538/problem/B

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
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        ll sum = 0;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        if (sum % n == 0) {
            int a = sum / n;
            int k = 0;
            for (int i = 0; i < n; i++) {
                if (arr[i] > a)
                    k++;
            }
            cout << k << endl;
        }
        else
            cout << -1 << endl;
    }
    kill;
}