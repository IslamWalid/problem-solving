// Problem link: https://codeforces.com/contest/298/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n; cin >> n;
    string snow; cin >> snow;
    multiset<char> directions;
    int s, t;
    for (int i = 0; i < n; i++)
        directions.insert(snow[i]);
    
    if (directions.count('R') > 0 && directions.count('L') > 0)
    {
        s = snow.find('R') + 1;
        t = snow.find('L');
    }
    else if(directions.count('R') == 0)
    {
        s = snow.rfind('L') + 1;
        t = snow.find('L');
    }
    else
    {
        s = snow.find('R') + 1;
        t = snow.rfind('R') + 2;
    }
    cout << s << " " << t << endl;
    return 0;
}