//Problem link: https://codeforces.com/contest/1557/problem/B

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
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    IO;

    int tc; cin >> tc;
    while (tc--) {
        int n, k; cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        
        int cnt = 1;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i+1])
                cnt++;
            else {
                for (int j = 0; j < n; j++) {
                    if (arr[j] < arr[i+1] && arr[j] > arr[i]) {
                        cnt++;
                        break;
                    }
                }
            }
        }

        if (cnt <= k)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    kill;
}