// Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=631&page=show_problem&problem=1236

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
    int m, n; cin >> m >> n;
    int salary, total_salary = 0;
    string job, s;
    unordered_map <string, int> values;

    for (int i = 0; i < m; i++) {
        cin >> job >> salary;
        values[job] = salary;
    }

    for (int i = 0; i < n; i++) {
        cin >> s;
        while (s != ".") {
            auto it = values.find(s);
            if (it != values.end())
                total_salary += it->second;
            cin >> s;
        }
        cout << total_salary << endl;
        total_salary = 0;
    }
    return 0;
}