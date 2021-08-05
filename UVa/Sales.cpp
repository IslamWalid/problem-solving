//Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3701

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
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        ull sum = 0;
        for (int i = 1; i < n; i++) {
            int cnt = 0;
            for (int j = i - 1; j >= 0; j--) {
                if (arr[j] <= arr[i])
                    cnt++;
            }
            sum += cnt;
        }
        cout << sum << endl;
    }
    kill;
}
