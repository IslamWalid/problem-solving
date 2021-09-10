// Problem link: http://codeforces.com/problemset/problem/271/A

#include <bits/stdc++.h>

#define kill return 0
#define space " "
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    IO;
    int year; cin >> year;
    set<char> digits;
    while(to_string(year).length() == 4)
    {
        year++;
        string temp = to_string(year);
        for(int i = 0; i < 4; i++)
            digits.insert(temp[i]);
        if(digits.size() == 4)
        {
            cout << year << endl;
            kill;
        }
        digits.clear();
    }
    return 0;
}