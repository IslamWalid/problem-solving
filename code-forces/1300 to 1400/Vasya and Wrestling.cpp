//Problem link: https://codeforces.com/contest/493/problem/B

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



int main() {
    IO();
    int n; cin >> n;
    vector<int> first, second;
    bool last;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        if (a > 0) {
            first.push_back(a);
            last = true;
        }
        else {
            second.push_back(-a);
            last = false;
        }
    }

    ll first_points = accumulate(first.begin(), first.end(), 0ll);
    ll second_points = accumulate(second.begin(), second.end(), 0ll);

    if (first_points == second_points) {
        for (int i = 0; i < first.size() && i < second.size(); i++) {
            if (first[i] > second[i]) {
                cout << "first" << endl;
                kill;
            }
            else if (second[i] > first[i]) {
                cout << "second" << endl;
                kill;
            }
        }

        if (first.size() > second.size())
            cout << "first" << endl;
        else if (second.size() > first.size())
            cout << "second" << endl;
        else {
            if (last)
                cout << "first" << endl;
            else
                cout << "second" << endl;
        }

    }
    else if (first_points > second_points)
        cout << "first" << endl;
    else
        cout << "second" << endl;
    

    kill;
}