// Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3562

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
    int n;
    ull s;
    while (cin >> n >> s)
    {
        bool possible = false;
        int len = n;
        int arr[n];
        ull sum = 0;
        for (int i = 0, j = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];

            while (j <= i && sum >= s) {
                possible = true;
                len = min(len, i - j + 1);
                sum -= arr[j];
                j++;
            }
        }
        if (possible)
            cout << len << endl;
        else
            cout << 0 << endl;
    }
    terminate;
}