// Problem link: http://codeforces.com/contest/652/problem/B

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    for (int i = 0, j = 0, k = n - 1; i < n; i++) {
        if (i % 2 == 0)
            cout << arr[j++] << space;
        else
            cout << arr[k--] << space;
    }
    cout << endl;
    return 0;
}