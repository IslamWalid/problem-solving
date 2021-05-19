// Problem link: http://codeforces.com/problemset/problem/618/B

#include <bits/stdc++.h>

#define kill return 0
#define space " "

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    int n; cin >> n;
    int arr[n][n];
    int result[n]{0};
    int zero, maxNum;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cin >> arr[i][j];
    }
    
    for(int i = 0; i < n ; i++)
    {
        maxNum = arr[i][0];
        for(int j = 0; j < n; j++)
        {
            if(arr[i][j] == 0)
                zero = j;
            if(arr[i][j] > maxNum)
                maxNum = arr[i][j];
        }
        result[zero] = maxNum;
    }

    for(int i = 0; i < n; i++)
    {
        if(result[i] == n - 1)
        {
            result[i] = n;
            break;
        }
    }

    for(int i = 0; i<n; i++)
        cout << result[i] << space;
    cout << endl;
    return 0;
}