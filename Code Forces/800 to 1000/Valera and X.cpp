// Problem link: https://codeforces.com/contest/404/problem/A

#include <bits/stdc++.h>

using namespace std;

bool checkDiagonals(string arr[], int n);

int main()
{
    int n;
    char ch;
    cin >> n;
    string paper[n];
    set <char> letters;
    for (int i = 0; i < n; i++)
        cin >> paper[i];

    for (int i = 0; i < n ; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if (i != j && i + j != n -1)
            {
                letters.insert(paper[i][j]);
                ch = paper[i][j];
            }
        }
    }

    if (checkDiagonals(paper, n) && letters.size() == 1 && paper[0][0] != ch)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}

bool checkDiagonals(string arr[], int n)
{
    char ch = arr[0][0];
    for(int i = 0, j = n - 1; i < n; i++, j--)
    {
        if (arr[i][i] != arr[i][j] || arr[i][i] !=  ch)
            return false;
    }
    return true;
}