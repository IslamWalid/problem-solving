// Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=455

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
    int n, temp;
    stack<int> station;
    while (cin >> n) {
        if (n == 0)
            break;

        while (cin >> temp) {
            if(temp == 0)
                break;

            int train[n];
            train[0] = temp;
            for(int i = 1; i < n; i++)
                cin >> train[i];

            bool possible = true;
            int i = 0, next = 1;
            while (possible && i < n) {
                possible = false;

                if(next <= n) {
                    station.push(next);
                    next++;
                    possible = true;
                }

                while(!station.empty() && train[i] == station.top()) {
                    station.pop();
                    i++;
                    possible = true;
                }
            }

            if(station.empty())
                cout << "Yes" << endl;
            else
                cout << "No" << endl;

            while (!station.empty())
                station.pop();
        }
        cout << endl;
    }
    return 0;
}
