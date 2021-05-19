// Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2726

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
    int banks, debentures;
    int creditor, debtor, value;
    char result;
    cin >> banks >> debentures;
    while(banks && debentures)
    {
        int monetary[banks];
        for(int i=0; i<banks; i++)
            cin >> monetary[i];
        while(debentures--)
        {
            cin >> debtor >> creditor >> value;
            monetary[debtor-1] -= value;
            monetary[creditor-1] += value;
        }
        result = 'S';
        for(int i=0; i<banks; i++)
        {
            if(monetary[i] < 0)
            {
                result = 'N';
                break;
            }
        }
        cout << result << endl;
        cin >> banks >> debentures;
    }
    return 0;
}