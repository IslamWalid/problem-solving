// Problem link: https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=417

#include <bits/stdc++.h>

#define kill return 0
#define space " "
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

bool isContained(pair<double, double> p, pair<double, double> upLeft, pair<double, double> downRight)
{
    return ((p.first > upLeft.first) && (p.first < downRight.first)) &&
                ((p.second < upLeft.second) && (p.second > downRight.second));
}

int main()
{
    IO;
    vector <pair<double, double>> upLeft, downRight;
    vector <pair<double, double>> points;
    double x1, y1, x2, y2;
    char ch;
    bool contained;
    while (cin >> ch)
    {
        if(ch == 'r')
        {
            cin >> x1 >> y1 >> x2 >> y2;
            upLeft.push_back(make_pair(x1, y1));
            downRight.push_back(make_pair(x2, y2));
        }
        else
            break;
    }
    while (cin >> x1 >> y1)
    {
        if(x1 != 9999.9 && y2 != 9999.9)
            points.push_back(make_pair(x1, y1));
        else
            break;
    }

    for(int i = 0; i < points.size(); i++)
    {
        contained = false;
        for(int j = 0; j < upLeft.size(); j++)
        {
            if(isContained(points[i], upLeft[j], downRight[j]))
            {
                cout << "Point " << i+1 << " is contained in figure " << j+1 << endl;
                contained = true;
            }
        }
        if(!contained)
            cout << "Point " << i+1 << " is not contained in any figure" << endl;
    }


    return 0;
}