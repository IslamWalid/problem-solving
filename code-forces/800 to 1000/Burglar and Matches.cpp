// Problem link: https://codeforces.com/contest/16/problem/B

#include <bits/stdc++.h>

#define kill return 0
#define space " "
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

bool compare(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.second > b.second;
}

int main()
{
    IO;
    int n, m; cin >> n >> m;
    int cnt = 0;
    vector <pair<int, int>> boxes;
    int a, b;
    for (int i = 0; i < m ; i++)
    {
        cin >> a >> b;
        boxes.push_back(make_pair(a, b));
    }

    sort(boxes.begin(), boxes.end(), compare);

    for (auto box : boxes)
    {
        if (box.first <= n)
        {
            cnt += box.first * box.second;
            n -= box.first;
        }
        else if(box.first > n && n > 0)
        {
            cnt += n * box.second;
            break;
        }
    }
    cout << cnt << endl;
    return 0;
}