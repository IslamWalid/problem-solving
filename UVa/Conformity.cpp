// Problem link: https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2261

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
    int n; cin >> n;
    
    while (n) {
        map <set<int>, int> courses;

        for (int i = 0; i < n; i++) {
            int temp;
            set <int> comb; 
            for (int i = 0; i < 5; i++) {
                cin >> temp;
                comb.insert(temp);
            }
            if (courses.find(comb) == courses.end())
                courses[comb] = 1;
            else
                courses[comb]++;
        }

        int popular = 1;
        for (auto it = courses.begin(); it != courses.end(); it++)
            popular = max(popular, it->second);

        int cnt = 0;
        for (auto it = courses.begin(); it != courses.end(); it++)
            if (it->second == popular)
                cnt++;

        cout << cnt * popular << endl;

        cin >> n;
    }

    return 0;
}