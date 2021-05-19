// Problem link: https://codeforces.com/contest/66/problem/B

#include <bits/stdc++.h>

#define kill return 0
#define space " "
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int rightFlow(int arr[], int n, int index);
int leftFlow(int arr[], int n, int index);


int main()
{
    IO;
    int n; cin >> n;
    int arr[n];
    int m = 0;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
        m = max(m, rightFlow(arr, n, i) + leftFlow(arr, n, i) + 1);
    
    cout << m << endl;
    return 0;
}

int rightFlow(int arr[], int n, int index)
{
    int cnt = 0;
    for (int i = index; i < n - 1; i++) {
        if (arr[i] >= arr[i+1])
            cnt++;
        else
            break;
    }
    return cnt;
}

int leftFlow(int arr[], int n, int index)
{
    int cnt = 0;
    for (int i = index; i > 0; i--)
    {
        if (arr[i] >= arr[i-1])
            cnt++;
        else
            break;
    }
    return cnt;
}