// Problem link: https://codeforces.com/contest/78/problem/B

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
    string s = "GBIV";
	cout << "ROY";
	for (int i = 0; i < n - 3; i++)
		cout << s[i % 4];
	cout << endl;
    return 0;
}