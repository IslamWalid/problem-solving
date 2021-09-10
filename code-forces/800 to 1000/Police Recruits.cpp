// Problem link: http://codeforces.com/contest/427/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n ,untreated=0;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ; i++)
        cin >> arr[i];
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]>0 && arr[i+1]>0)
            arr[i+1]+=arr[i];
        if(arr[i]==0) continue;
        else if(arr[i]>arr[i+1])
        {
            arr[i+1]+=arr[i];
        }
        else if(arr[i]<0) untreated++;
    }
    cout << untreated << endl;
    return 0;
}