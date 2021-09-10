//Problem link: https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=310

#include <bits/stdc++.h>

#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define kill return 0
#define PI  3.14159265358979323846
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

ull mod(ull base, ull power, ull module) {
    if (power == 0)
        return 1;

    if (power % 2 == 0) {
        ull x = mod(base, power / 2, module);
        return (x * x) % module;
    }
    else
        return (base % module * mod(base, power - 1, module)) % module;
}

int main() {
    IO;
    ull b, p, m;
    while (cin >> b >> p >> m)
        cout << mod(b, p, m) << endl;
    kill;
}