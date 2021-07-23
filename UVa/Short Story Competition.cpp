// Problem link: https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=3926

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
    int n, l, c;

    while (cin >> n >> l >> c) {
        string words[n];
        int lines = 1;
        for (int i = 0; i < n; i++)
            cin >> words[i];

        for (int i = 0, curLine = 0; i < n; i++) {
            if (words[i].length() + curLine + 1 <= c + 1)
                curLine += words[i].length() + 1;
            else {
                curLine = words[i].length() + 1;
                lines++;
            }
        }

        cout << (lines + l - 1) / l << endl;
    }
    return 0;
}