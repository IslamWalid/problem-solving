// Problem link: https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1415

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

bool possible_capacity(int vessels[], int n, int m, int c) {
    int capacity = c;
    m--;
    for (int i = 0; i < n; i++) {
        if (vessels[i] > c)
            return false;
        else if (vessels[i] <= capacity)
            capacity -= vessels[i];
        else if (vessels[i] > capacity) {
            if (m == 0)
                return false;
            m--;
            capacity = c;
            capacity -= vessels[i];
        }
    }
    return true;
}

int main() {
    int n, m;
    while (cin >> n >> m) {
        int vessels[n];
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> vessels[i];
            sum += vessels[i];
        }
        int low = 1;
        int high = sum;
        int mid, ans;

        while (low <= high) {
            mid = (low + high) / 2;
            if (possible_capacity(vessels, n, m, mid)) {
                ans = mid;
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        cout << ans << endl;
    }
    terminate;
}