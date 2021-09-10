// Problem link: https://codeforces.com/problemset/problem/79/A

#include <bits/stdc++.h>

#define kill return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int x, y;

bool Ciel()
{
    int total;
    if(x >= 2)
    {
        x -= 2;
        total = 200;
    }
    else
    {
        total = 100 * x;
        x = 0;
    }
    y -= (220 - total) / 10;

    if(y >= 0)
        return true;
    return false;
}

bool Hanako()
{
    int total = 0;
    if(y >= 22)
    {
        y -= 22;
        return true;
    }
    else if(y >= 12)
    {
        y -= 12;
        total = 120;
    }
    else if(y >= 2)
    {
        y -= 2;
        total = 20;
    }
    else
    {
        return false;
    }
    x -= (220 - total) / 100;
    if(x >= 0)
        return true;
    return false;

}

int main()
{
    cin >> x >> y;
    bool turn = true;
    while(true)
    {
        if(turn)
        {
            if (Ciel())
                turn = false;
            else
                break;
        }
        else
        {
            if(Hanako())
                turn = true;
            else
                break;
        }
    }
    if(turn)
        cout << "Hanako" << endl;
    else
        cout << "Ciel" << endl;
    return 0;
}