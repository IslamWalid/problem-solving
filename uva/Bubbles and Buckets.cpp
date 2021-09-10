// Problem link: https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2490

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;


ull merge(int arr[], int start, int mid, int end) {
    ull invs = 0;

    int n1 = mid - start + 1,
        n2 = end - mid;
    
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[start + i];
    for (int i = 0; i < n2; i++)
        R[i] = arr[mid + i + 1];

    int i = 0,
        j = 0,
        k = start;

    while (i < n1 && j < n2) {
        if (L[i] > R[j]) {
            arr[k++] = R[j++];
            invs += n1 - i;
        }
        else
            arr[k++] = L[i++];
    }

    while (i < n1)
        arr[k++] = L[i++];
    while (j < n2)
        arr[k++] = R[j++];

    return invs;
}

ull count_inversions (int arr[], int start, int end) {
    ull invs = 0;
    if (start < end) {
        int mid = (start + end) / 2;

        invs += count_inversions(arr, start, mid);
        invs += count_inversions(arr, mid + 1, end);

        invs += merge(arr, start, mid, end);
    }
    return invs;
}


int main() {
    int n; cin >> n;
    
    while (n) {
        int p[n];
        ull inversions;
        
        for (int i = 0; i < n; i++)
            cin >> p[i];
        
        inversions = count_inversions(p, 0, n - 1);

        cout << (inversions % 2 == 0 ? "Carlos" : "Marcelo") << endl;

        cin >> n;
    }
    
    return 0;
}