//Problem link: https://codeforces.com/contest/79/problem/B

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
    int n, m, k, t;
    cin >> n >> m >> k >> t;
    vector<int> waste;
    while (k--) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        waste.push_back(a * m + b);
    }
    string crops[] = {"Carrots", "Kiwis", "Grapes"};
    sort(waste.begin(), waste.end());

    while (t--) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        int pos = a * m + b;
        int i = 0;
        bool flag = false;
        for (auto p : waste) {
            if (pos > p)
                i++;
            else if (p == pos)
                flag = true;
            else
                break;
        }
        if (flag)
            cout << "Waste" << endl;
        else
            cout << crops[(pos - i) % 3] << endl;
    }
    kill;
}