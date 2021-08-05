// Problem link: https://codeforces.com/contest/68/problem/B

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

bool predicate (int arr[], int n, double energy, double k) {
    double reserve = 0;
    double x;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < energy) {
            reserve -= energy - (double)arr[i];
        }
        else if (arr[i] > energy) {
            x = arr[i] - energy;
            x = x - (x * k ) / 100;
            reserve += x;
        }
    }
    if (reserve - 10e-12 > 0)
        return true;
    return false;
}

int main() {
    int n, k;
    cin >> n >> k;
    int accum[n];
    int max_accum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> accum[i];
        max_accum = max(max_accum, accum[i]);
    }

    double low = 0, high = max_accum;
    double mid, ans = 0;


    while (fabs(high - low) > 10e-12) {
        mid = (low + high) / 2.0;
        if (predicate(accum, n, mid, k)) {
            ans = mid;
            low = mid;
        }
        else
            high = mid;
    }
    cout << fixed << setprecision(9) << ans << endl;
    terminate;
}