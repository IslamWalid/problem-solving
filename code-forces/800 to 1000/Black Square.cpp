// Problem link: http://codeforces.com/contest/431/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int totalWaste = 0;
    int calories[4];
    string slots;
    for (int i = 0; i < 4; ++i) {
        cin >> calories[i];
    }
    cin >> slots;
    for (int i = 0; i < slots.length(); ++i)
    {
        totalWaste += calories[slots[i]-'0'-1];
    }
    cout << totalWaste << endl;
    return 0;
}