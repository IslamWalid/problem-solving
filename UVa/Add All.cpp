// Problem link: https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1895

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
    int n; cin >> n;
    int temp;
	while (n != 0) {

		priority_queue<int, vector<int>, greater<int> > q;

		while (n--) {
            cin >> temp;
			q.push(temp);
		}

		int total = 0, cost = 0;
		while (q.size() > 1) {
			total = q.top();
			q.pop();
			total += q.top();
			q.pop();
			cost += total;
			q.push(total);
		}

		cout << cost << endl;
        cin >> n;
	}

    return 0;
}