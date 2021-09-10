// Problem link: https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=3644

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
    int k, id, period;
    string s;
    priority_queue<pair<int, pair<int, int>>,
			        vector<pair<int, pair<int, int>>>,
			        greater<pair<int, pair<int, int>>>> q;


    while (true) {
        cin >> s;
        if (s == "#")
            break;

        cin >> id >> period;
        q.push(make_pair(period, make_pair(id, period)));
    }

    cin >> k;
    while (k--) {
        auto pr = q.top();
        q.pop();

        cout << pr.second.first << endl;

        pr.first += pr.second.second;
        q.push(pr);
    }
    
    return 0;
}