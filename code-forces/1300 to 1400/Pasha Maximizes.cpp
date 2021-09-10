//Problem link: https://codeforces.com/contest/435/problem/B

#include <bits/stdc++.h>

#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define kill return 0
#define PI  3.14159265358979323846
#define space ' '
#define MOD 1000000007

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
    IO;
    string a;
    int k;
    cin >> a >> k;
    for (int i = 0; i < a.length() && k > 0; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < a.length() && j <= i + k; j++) {
            if (a[j] > a[maxIndex]) {
                maxIndex = j;
            }
        }
        for (int j = maxIndex; j > i; j--) {
            char temp = a[j-1];
            a[j-1] = a[j];
            a[j] = temp;
            k--;
        }
    }
    cout << a << endl;
    kill;
}