// Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3084#google_vignette

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
    unsigned int n, a, b;
    bool turn;
    while (cin >> n) {
        if (n == 0)
            break;
        a = b = 0;
        turn = true;
        for(int i = 0; i < 32; i++) {
            if((n & 1) == 1) {
                if(turn) {
                    a |= (1 << i);
                    turn = false;
                }
                else {
                    b |= (1 << i);
                    turn = true;
                }
            }
             n = n >> 1;
        }
        cout << a << space << b << endl;
    }
    return 0;
}