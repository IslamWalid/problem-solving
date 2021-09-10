// Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=355

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
    int n; cin >> n;
    while (n != 0) {
        int maxi = 0;
        int cnt[n]{0};
        string img[n];

        cin.ignore();
        for(int i = 0; i < n; i++) {
            getline(cin, img[i]);
            for (int j = 0; j < img[i].length(); j++) {
                if (img[i][j] == 'X') {
                    cnt[i]++;
                }
            }
            maxi = max(maxi, cnt[i]);
        }

        int ans = 0;
        for (int i = 0; i < n; i++)
            ans += (maxi - cnt[i]);

        cout << ans << endl;

        cin >> n;
    }

    return 0;
}