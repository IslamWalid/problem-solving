// Problem link: https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2531

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
    int T; cin >> T;
    for (int t = 1; t <= T; t++) {
        int n, m, k; cin >> n >> m >> k;
        int arr[n];
        int freq[k];

        arr[0] = 1;
        arr[1] = 2;
        arr[2] = 3;
        for (int i = 3; i < n; i++)
            arr[i] = (arr[i - 1] + arr[i - 2] + arr[i - 3]) % m + 1;

        int cnt = 0, ans = n;
        bool valid = false;
        memset(freq, 0, sizeof(freq));
        for (int i = 0, j = 0; i < n; i++) {
            if (arr[i] <= k) {
                if (freq[arr[i] - 1] == 0)
                    cnt++;
                freq[arr[i] - 1]++;
            }

            while (j <= i && cnt == k) {
                valid = true;
                ans = min(ans, i - j + 1);
                if (arr[j] <= k && --freq[arr[j] - 1] == 0)
                    cnt--;
                j++;
            }
        }
        if (valid)
            cout << "Case " << t << ": " << ans << endl;
        else
            cout << "Case " << t << ": " << "sequence nai" << endl;
    }
    terminate;
}