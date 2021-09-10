// Problem link: http://codeforces.com/contest/381/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int sereja = 0, dima = 0;
    int n, i, j;
    cin >> n;
    int cards[n];
    for (int k = 0; k < n; ++k)
    {
        cin >> cards[k];
    }
    i = 0;
    j = n - 1;
    while (i <= j)
    {
        if (cards[i] >= cards[j])
        {
            sereja += cards[i];
            i++;
        }
        else
        {
            sereja += cards[j];
            j--;
        }
        if (n % 2 != 0 && i > j)
        {
            break;
        }
        if (cards[i] >= cards[j])
        {
            dima += cards[i];
            i++;
        }
        else
        {
            dima += cards[j];
            j--;
        }
    }
    cout << sereja << " " << dima << endl;
    return 0;
}