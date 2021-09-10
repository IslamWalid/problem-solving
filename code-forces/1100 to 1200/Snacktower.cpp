// Problem link: http://codeforces.com/problemset/problem/767/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int next = n;
    int snacks[n];
    priority_queue <int> pq;
    for (int i = 0; i < n; i++)
    {
        cin >> snacks[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (snacks[i] == next)
        {
            cout << snacks[i] << " ";
            next--;
            if (!pq.empty())
            {
                while (pq.top() == next)
                {
                    cout << pq.top() << " ";
                    pq.pop();
                    next--;
                }
            }
            cout << endl;
        }
        else
        {
            pq.push(snacks[i]);
            cout << endl;
        }
    }
    return 0;
}