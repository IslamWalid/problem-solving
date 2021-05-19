// Problem link: https://codeforces.com/contest/699/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n; cin >> n;
    string directions; cin >> directions;
    int particles[n];
    int distance = -1;
    for (int i = 0; i < n; i++)
        cin >> particles[i];

    for (int i = 0; i < n - 1; i++)
    {
        if (directions[i] == 'R' && directions[i+1] == 'L')
        {
            if (distance == -1)
                distance = particles[i+1] - particles[i];
            else
                distance = min(distance, particles[i+1] - particles[i]);
        }
    }
    if (distance == -1)
        cout << distance << endl;
    else
        cout << distance / 2 << endl;
    return 0;
}