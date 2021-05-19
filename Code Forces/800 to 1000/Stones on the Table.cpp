// Problem link: http://codeforces.com/contest/266/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n;
    int count = 0;
    string stones;
    cin >> n >> stones;
    for (int i = 0; i < n - 1; ++i)
    {
        if (stones[i] == stones[i+1])
            count++;
    }
    cout << count << endl;
    return 0;
}