// Problem link: https://codeforces.com/problemset/problem/230/B

#include <bits/stdc++.h>

#define kill return 0
#define space " "
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

bool is_prime(ull n)
{
    if (n < 2)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (ull i = 5; i*i <= n ; i+=6)
    {
        if (n % i == 0) return false;
        if (n % (i+2) == 0) return false;
    }
    return true;
}

bool is_square(ull n)
{
    if (fmod(sqrt(n), 1) == 0)
        return true;
    else
        return false;
}

int main()
{
    IO;
    ull n; cin >> n;
    ull arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (is_square(arr[i]) && is_prime(sqrt(arr[i])))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}