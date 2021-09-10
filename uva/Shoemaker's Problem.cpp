// Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=967

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

struct Job
{
    int time;
    int fine;
    int id;
};

bool compare(const Job &j1, const Job &j2) {
    return j1.time * j2.fine < j2.time * j1.fine;
}


int main() {
    int t; cin >> t;

    while (t--)
    {
        int n; cin >> n;

        vector <Job> jobs;
        for (int i = 0; i < n; i++) {
            Job cur;
            cin >> cur.time >> cur.fine;
            cur.id = i + 1;
            jobs.push_back(cur);
        }

        stable_sort(jobs.begin(), jobs.end(), compare);

        cout << jobs[0].id;
        for (int i = 1; i < n; i++)
            cout << space << jobs[i].id;
        cout << endl;

        if (t)
            cout << endl;
    }
    return 0;
}