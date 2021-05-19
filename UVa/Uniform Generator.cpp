// Problem link: https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=349

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int step, mod, first;
    bool good = false;
    while (cin >> step >> mod)
    {
        bool visited[mod] = {0};
        
        for (int i = 0; i < mod; i++)
        {
            visited[first % mod] = true;
            first = (first + step) % mod;
        }

        for (int i = 0; i < mod; i++)
        {
            if (visited[i] == false)
            {
                good = false;
                break;
            }
            else
            {
                good = true;
            }
        }

        if (good)
        {
            printf("%10d%10d     %s\n",step,mod,"Good Choice");
        }
        else
        {
            printf("%10d%10d     %s\n",step,mod,"Bad Choice");
        }
    }
    return 0;
}