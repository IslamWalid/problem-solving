// Problem link: https://www.spoj.com/problems/AGGRCOW/

#include <bits/stdc++.h>

#define kill return 0
#define space " "
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

bool canFit (int arr[], int n, int elements, int distance);

int main()
{
    IO;
    int t; cin >> t;
    int n, cows;
    while (t--)
    {
        cin >> n >> cows;
        int pos[n];
        for (int i = 0; i < n; i++)
            cin >> pos[i];

        sort(pos, pos + n);

        int st = 0, en = pos[n - 1];
        int md;
        int minDistance = -1;
        while (st <= en)
        {
            md = (st + en) / 2;
            if (canFit(pos, n, cows, md))
            {
                minDistance = md;
                st = md + 1;
            }
            else
                en = md - 1;
        }
        cout << minDistance << endl;
    }
    return 0;
}

bool canFit (int arr[], int n, int elements, int distance)
{
    int cnt = 1;
    int current = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (distance <= arr[i] - current)
        {
            cnt++;
            current = arr[i];
        }
    }
    if (cnt >= elements)
        return true;
    else
        return false;
}