// Problem link: https://codeforces.com/contest/296/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n; cin >> n;
    int arr[n];
    multiset<int> numbers;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        numbers.insert(arr[i]);
    }
    for (auto item : numbers)
    {
        if (numbers.count(item) > (n + 1) / 2)
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}