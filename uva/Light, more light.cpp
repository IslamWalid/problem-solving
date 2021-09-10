// Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1051

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    unsigned int n;
    unsigned int sq;
    cin >> n;
    while (n != 0)
    {
        sq = (int) sqrt(n);
        if (sq * sq == n)
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
        cin >> n;
    }
    return 0;
}