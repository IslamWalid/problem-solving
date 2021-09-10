// Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1552

#include <bits/stdc++.h>

#define kill return 0
#define space " "
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int shorter(int arr[], int n, int h);
int taller(int arr[], int n, int h);

int main()
{
    IO;
    int n, q;
    int less, more;
    cin >> n;
    int ladies[n];
    for (int i = 0; i < n; i++)
        cin >> ladies[i];

    cin >> q;
    int men[q];
    for (int i = 0; i < q; i++)
        cin >> men[i];

    for(int i = 0; i < q; i++)
    {
        less = shorter(ladies, n, men[i]);
        more = taller(ladies, n, men[i]);
        if (less == -1 && more != -1)
            cout << 'X' << space << more << endl;
        else if (less != -1 && more == -1)
            cout << less << space << 'X' << endl;
        else if (less == -1 && more == -1)
            cout << 'X' << space << 'X' << endl;
        else
            cout << less << space << more << endl;
    }
    return 0;
}

int shorter(int arr[], int n, int h)
{
    int st = 0, en = n - 1;
    int md, val = -1;
    while (st <= en)
    {
        md = (st + en) / 2;
        if (arr[md] < h)
        {
            val = arr[md];
            st = md + 1;
        }
        else
            en = md - 1;
    }
    return val;
}

int taller(int arr[], int n, int h)
{
    int st = 0, en = n - 1;
    int md, val = -1;
    while (st <= en)
    {
        md = (st + en) / 2;
        if (arr[md] > h)
        {
            val = arr[md];
            en = md - 1;
        }
        else
            st = md + 1;
    }
    return val;
}