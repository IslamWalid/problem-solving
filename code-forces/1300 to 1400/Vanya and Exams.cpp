//Problem link: https://codeforces.com/contest/492/problem/C

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
    ll n, r, avg; cin >> n >> r >> avg;
    vector<pair<int, int>> arr (n);
    ll totalMarks = 0;
    ll scholarMarks = avg * n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i].second >> arr[i].first;
        totalMarks += arr[i].second;
    }

    sort(arr.begin(), arr.end());

    ll cnt = 0;
    ll neededMarks = scholarMarks - totalMarks;
    for (auto exam: arr) {
        if (neededMarks > 0) {
            if (exam.second < r) {
                if (neededMarks < r - exam.second) {
                    cnt += neededMarks * exam.first;
                    exam.second += neededMarks;
                    neededMarks = 0;
                }
                else {
                    cnt += (r - exam.second) * exam.first;
                    neededMarks -= r - exam.second;
                }
            }
        }
        else
            break;
    }
    cout << cnt << endl;
    kill;
}