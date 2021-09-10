// Problem link:

#include <bits/stdc++.h>

#define kill return 0
#define space " "

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    int n; cin >> n;
    int k = n / 2;
    cout << k << endl;
    for(int i = 0; i < k - 1; i++)
        cout << 2 << space;
    if(n % 2 == 0)
        cout << 2 << endl;
    else
        cout << 3 << endl;
    return 0;
}