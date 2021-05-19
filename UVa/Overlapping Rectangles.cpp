// Problem link: https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=401

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
    int n; cin >> n;
    int xll1, yll1, xur1, yur1, xll2, yll2, xur2, yur2;
    int xll, yll, xur, yur;
    while (n--)
    {
        cin >> xll1 >> yll1 >> xur1 >> yur1;
        cin >> xll2 >> yll2 >> xur2 >> yur2;
        xll = max(xll1, xll2);
        yll = max(yll1, yll2);
        xur = min(xur1, xur2);
        yur = min(yur1, yur2);

        if(xll < xur && yll < yur)
            cout << xll << space << yll << space << xur << space << yur << endl;
        else
            cout << "No Overlap\n";
        if(n)
            cout << endl;
    }
    
    return 0;
}