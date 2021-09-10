// Problem link: https://codeforces.com/contest/143/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;

    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            for (int k = 1; k < 10; k++)
            {
                for (int l = 1; l < 10; l++)
                {
                    if (i + j == r1 && i + k == c1 && i + l == d1 && j + l == c2 && j + k == d2 && k + l == r2)
                    {
                        if (i != j && i != k && i != l && j != k && j != l && k != l)
                        {
                            cout << i << " " << j << endl;
                            cout << k << " " << l << endl;
                            return 0;
                        }
                    }
                }
            }
        }
    }
    cout << -1 << endl;
    return 0;
}