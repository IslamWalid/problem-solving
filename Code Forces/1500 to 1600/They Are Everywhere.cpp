// Problem link: http://codeforces.com/contest/701/problem/C

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
    int n; cin >> n;
    string flats; cin >> flats;

    int len = n;
    int freq[123] {0};

    for (int i = 0, j = 0; i < n; i++) {
        if (freq[flats[i]] == 0)
            len = i + 1;
        freq[flats[i]]++;

        while (j < i) {
            len = min(len, i - j + 1);
            if (freq[flats[j]] > 1) {
                freq[flats[j]]--;
                j++;
            }
            else
                break;
        }
    }
    cout << len << endl;
    terminate;
}