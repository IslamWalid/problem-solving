//Problem link: https://codeforces.com/contest/614/problem/B

#include <bits/stdc++.h>

#define kill return 0
#define PI  3.14159265358979323846
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void IO() {
    #ifdef LOCAL_MACHINE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}


bool is_beautiful(string s) {
    int ones = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '1' && s[i] != '0')
            return false;

        if (s[i] == '1')
            ones++;
        
        if (ones > 1)
            return false;
    }
    return true;
}

int main() {
    IO();
    int n; cin >> n;
    string numbers[n];
    string not_beautiful = "";
    int zeros = 0;
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
        if (numbers[i] == "0") {
            cout << "0" << endl;
            kill;
        }
        if (is_beautiful(numbers[i]))
            zeros += numbers[i].size() - 1;
        else
            not_beautiful = numbers[i];
    }

    if (not_beautiful == "")
        cout << "1";
    else
        cout << not_beautiful;
    while (zeros--)
        cout << '0';
    cout << endl;

    kill;
}