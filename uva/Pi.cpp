//Problem link: https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=353

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
    while (n) {
        int cnt = 0;
        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (__gcd(arr[i], arr[j]) == 1)
                    cnt++;
            }
        }

        if (cnt == 0)
            cout << "No estimate for this data set." << endl;
        else
            cout << fixed << setprecision(6) << sqrt(6.0 * (n * (n - 1) / 2) / cnt) << endl;


        cin >> n;
    }
    kill;
}