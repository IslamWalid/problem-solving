//Problem link: https://codeforces.com/contest/746/problem/B

#include <bits/stdc++.h>

#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define kill return 0
#define PI  3.14159265358979323846
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
    IO;
    int n;
    cin >> n;
    string encoded;
    cin >> encoded;
    deque<char> decoded;
    if (n % 2 == 0) {
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0)
                decoded.push_front(encoded[i]);
            else
                decoded.push_back(encoded[i]);
        }
    }
    else {
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0)
                decoded.push_back(encoded[i]);
            else
                decoded.push_front(encoded[i]);
        }
    }
    for (auto letter: decoded)
        cout << letter;
    cout << endl;
    kill;
}