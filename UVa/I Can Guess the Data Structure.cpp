// Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3146

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
    int n;
    int op, val;

    while (cin >> n) {
        bool is_stack, is_queue, is_pqueue;
        is_stack = is_queue = is_pqueue = true;

        stack <int> s;
        queue <int> q;
        priority_queue <int> pq;

        while (n--) {
            cin >> op >> val;
            if (op == 1) {
                s.push(val);
                q.push(val);
                pq.push(val);
            }
            else {
                if (is_stack) {
                    if (s.empty() || s.top() != val)
                        is_stack = false;
                    else
                        s.pop();
                }

                if (is_queue) {
                    if (q.empty() || q.front() != val)
                        is_queue = false;
                    else
                        q.pop();
                }

                if (is_pqueue) {
                    if (pq.empty() || pq.top() != val)
                        is_pqueue = false;
                    else
                        pq.pop();
                }
            }
        } 
        
        if (is_stack && is_queue || is_stack && is_pqueue || is_queue && is_pqueue)
            cout << "not sure" << endl;
        else if (is_stack)
            cout << "stack" << endl;
        else if (is_queue)
            cout << "queue" << endl;
        else if (is_pqueue)
            cout << "priority queue" << endl;
        else
            cout << "impossible" << endl;
    }
    return 0;
}