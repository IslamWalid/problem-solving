// Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=358

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
    int k = 1;
    string temp, s;
    unordered_map<string, int> m;
    queue <string> q;

    for (char c = 'a'; c <= 'z'; c++)
        q.push(string(1, c));

    while (!q.empty()) {
        temp = q.front();
        q.pop();
        m[temp] = k++;

        if (temp.length() != 5) {
            for (char c = temp[temp.length() - 1] + 1; c <= 'z'; c++)
                q.push(temp + c);
        }
    }

    while (cin >> s) {
        auto it = m.find(s);
        if (it == m.end())
            cout << 0 << endl;
        else
            cout << it->second << endl;
    }
    return 0;
}