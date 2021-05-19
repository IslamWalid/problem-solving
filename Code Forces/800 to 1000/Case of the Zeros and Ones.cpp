// Problem link: https://codeforces.com/problemset/problem/556/A

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    int n; cin >> n;
    string str; cin >> str;
    int zeros, ones;
    ones = zeros = 0;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == '1')
            ones++;
        else
            zeros++;
    }
    cout << abs(ones - zeros) << endl;
    return 0;
}