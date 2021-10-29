//Problem link: https://codeforces.com/contest/253/problem/B

#include <bits/stdc++.h>

#define kill return 0
#define PI  3.14159265358979323846
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void IO() {
    #ifdef LOCAL_MACHINE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}


int main() {
    IO();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) 
        cin >> arr[i];
    
    sort(arr, arr + n);

    int ans = n + 1;
    int i = 0, j = 0;
    while (j < n) {
        if (arr[j] <= arr[i] * 2)
            j++;
        else
            i++;
        ans = min(ans, n - (j - i));
    }

    cout << ans << endl;

    kill;
}