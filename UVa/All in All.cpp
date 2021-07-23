// Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1281

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
    string s, t;
    while (cin >> s >> t)
    {
        int i = 0,
            j = 0;

        while (j < t.length()) {
            if (s[i] == t[j]) {
                i++;
                j++;
            }
            else
                j++;
        }

        if (i == s.length())
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}