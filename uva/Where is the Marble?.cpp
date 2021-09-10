// Problem link: https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1415

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int bi_search(int arr[], int n, int val) {
    int low = 0,
        high = n - 1,
        mid,
        index = -1;

    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] < val)
            low = mid + 1;
        else if (arr[mid] > val)
            high = mid - 1;
        else {
            index = mid;
            high = mid - 1;
        }
    }
    return index;
}

int main() {
    int n, q;
    cin >> n >> q;

    for (int t = 1; n != 0 && q != 0; t++) {

        int marbles[n];
        int queries[q];

        for (int i = 0; i < n; ++i)
            cin >> marbles[i];

        for (int i = 0; i < q; ++i)
            cin >> queries[i];

        sort(marbles, marbles + n);

        cout << "CASE# " << t << ":" << endl;
        for (auto val: queries) {
            int index = bi_search(marbles, n, val);
            if (index == -1)
                cout << val << " not found" << endl;
            else
                cout << val << " found at " << index + 1 << endl;
        }

        cin >> n >> q;
    }
    terminate;
}