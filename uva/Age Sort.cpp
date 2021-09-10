// Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2457

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

typedef long long ll;
typedef unsigned long long ull;
using namespace std;


int main() {
    IO;
    int n; cin >> n;
    
    while (n) {
        int arr[n],
            cnt[100] = {0},
            output[n];
        

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            cnt[arr[i]]++;
        }

        for (int i = 1; i < 100; i++)
            cnt[i] += cnt[i - 1];

        for (int i = 0; i < n; i++) {
            output[cnt[arr[i]] - 1] = arr[i];
            cnt[arr[i]]--;
        }

        for (int i = 0; i < n - 1; i++)
            cout << output[i] << space;
        cout << output[n - 1] << endl;

        cin >> n;
    }
    return 0;
}