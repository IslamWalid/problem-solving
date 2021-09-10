// Problem link: http://codeforces.com/contest/69/problem/E

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    set <int> S;
    unordered_map<int, int> M;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int i, j;

    for (i = 0; i < k; ++i) {
        M[arr[i]]++;
        if (M[arr[i]] == 1)
            S.insert(arr[i]);
        else
            S.erase(arr[i]);
    }
    auto it = S.rbegin();
    if (S.empty())
        cout << "Nothing" << endl;
    else
        cout << *it << endl;

    for(j = 0; i < n; ++i) {
        M[arr[i]]++;
        if (M[arr[i]] == 1)
            S.insert(arr[i]);
        else
            S.erase(arr[i]);

        M[arr[j]]--;
        if (M[arr[j]] == 1)
            S.insert(arr[j]);
        else
            S.erase(arr[j]);
        j++;

        if (S.empty())
            cout << "Nothing" << endl;
        else
            cout << *it << endl;
    }

    terminate;
}