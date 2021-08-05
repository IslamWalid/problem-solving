//Problem link: https://codeforces.com/contest/451/problem/B

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

    int l, r;
    l = r = -1;
    bool sorted = true;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i+1] < arr[i]) {
            l = i;
            sorted = false;
            break;
        }
    }

    if (l != -1) {
        for (r = l; r < n - 1; r++) {
            if (arr[r+1] > arr[r])
                break;
        }
        partial_sort(arr + l, arr + r, arr + n);
        for (int i = 0; i < n - 1; i++) {
            if (arr[i+1] < arr[i]) {
                cout << "no" << endl;
                kill;
            }
        }
        cout << "yes" << endl;
        cout << l + 1 << space << r + 1 << endl;
    }
    else if (sorted) {
        cout << "yes" << endl;
        cout << 1 << space << 1 << endl;
    }
    else
        cout << "no" << endl;
    kill;
}