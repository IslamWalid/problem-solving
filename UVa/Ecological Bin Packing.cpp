// Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=38

#include <bits/stdc++.h>

#define kill return 0
#define space " "
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    IO;
    ull first[3], second[3], third[3];
    ull cnt = 0, temp;
    string s;
    while (cin >> first[0] >> first[1] >> first[2] >> second[0] >> second[1] >> second[2] >> third[0] >> third[1] >> third[2])
    {
        temp = ULLONG_MAX;

        // BCG
        cnt += second[0] + third[0];
        cnt += first[2] + third[2];
        cnt += first[1] + second[1];
        if (cnt < temp)
        {
            temp = cnt;
            s = "BCG";
        }
        cnt = 0;

        // BGC
        cnt += second[0] + third[0];
        cnt += first[1] + third[1];
        cnt += first[2] + second[2];
        if (cnt < temp)
        {
            temp = cnt;
            s = "BGC";
        }
        cnt = 0;

        // CBG
        cnt += second[2] + third[2];
        cnt += first[0] + third[0];
        cnt += first[1] + second[1];
        if (cnt < temp)
        {
            temp = cnt;
            s = "CBG";
        }
        cnt = 0;

        // CGB
        cnt += second[2] + third[2];
        cnt += first[1] + third[1];
        cnt += first[0] + second[0];
        if (cnt < temp)
        {
            temp = cnt;
            s = "CGB";
        }
        cnt = 0;

        // GBC
        cnt += second[1] + third[1];
        cnt += first[0] + third[0];
        cnt += first[2] + second[2];
        if (cnt < temp)
        {
            temp = cnt;
            s = "GBC";
        }
        cnt = 0;

        // GCB
        cnt += second[1] + third[1];
        cnt += first[2] + third[2];
        cnt += first[0] + second[0];
        if (cnt < temp)
        {
            temp = cnt;
            s = "GCB";
        }
        cnt = 0;

        cout << s << space << temp << endl;
    }
    return 0;
}