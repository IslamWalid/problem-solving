// Problem link: http://codeforces.com/problemset/problem/665/A

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    int a, b, ta, tb; cin >> a >> ta >> b >> tb;
    string depart; cin >> depart;
    int startTrip, cnt = 0;
    startTrip = stoi(depart.substr(0, 2)) * 60;
    startTrip += stoi(depart.substr(3, 2));
    int endTrip = startTrip + ta;
    int startDay = 5 * 60;
    int endDay = 23 * 60 + 59;
    for(int i = startDay; i <= endDay; i+=b)
    {
        if(i > startTrip - tb && i < endTrip)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}