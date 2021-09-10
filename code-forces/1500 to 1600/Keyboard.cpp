//Problem link: https://codeforces.com/contest/88/problem/B

#include <bits/stdc++.h>

#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define kill return 0
#define PI  3.14159265358979323846
#define space ' '
#define MOD 1000000007

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int distance(int x1, int y1, int x2, int y2) {
    int x = x1 - x2;
    int y = y1 - y2;
    return x * x + y * y;
}

int smallestDistance(char c, vector<pair<int, int>> &letter, vector<pair<int, int>> &shift) {
    int minDistance = INT32_MAX;
    for (int i = 0; i < letter.size(); i++) {
        for (int j = 0; j < shift.size(); j++) {
            minDistance = min(minDistance, distance(letter[i].first, letter[i].second, shift[j].first, shift[j].second));
        }
    }
    return minDistance;
}

int main() {
    IO;
    int n, m, x;
    cin >> n >> m >> x;
    string keyboard[n];
    vector<pair<int, int>> letters [26], shift;
    for (int i = 0; i < n; i++)
        cin >> keyboard[i];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (keyboard[i][j] == 'S')
                shift.push_back({i, j});
            else
                letters[keyboard[i][j] - 'a'].push_back({i, j});
        }
    }

    int q; cin >> q;
    string t; cin >> t;
    int cnt = 0;
    int arr[26];
    memset(arr, -1, sizeof(arr));
    for (int i = 0; i < q; i++) {
        char cur = (char) tolower(t[i]);
        if (!letters[cur - 'a'].empty()) {
            if (isupper(t[i])) {
                if (!shift.empty()) {
                    if (arr[cur - 'a'] == -1) {
                        int distance = smallestDistance(cur, letters[cur - 'a'], shift);
                        if (distance > x * x) {
                            arr[cur - 'a'] = 0;
                            cnt++;
                        }
                        else
                            arr[cur - 'a'] = 1;
                    }
                    else if (arr[cur - 'a'] == 0)
                        cnt++;
                }
                else {
                    cout << -1 << endl;
                    kill;
                }
            }
        }
        else {
            cout << -1 << endl;
            kill;
        }
    }
    cout << cnt << endl;
    kill;
}