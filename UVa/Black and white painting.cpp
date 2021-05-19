// Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2172

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n, m, color, result;
    cin >> n >> m >> color;
    while (n || m || color)
    {
        result = (n - 7) * (m - 7);
        if (result % 2 != 0)
        {
            cout << result / 2 + color << endl;
        }
        else
        {
            cout << result / 2 << endl;
        }
        cin >> n >> m >> color;
    }
    
    return 0;
}