//Problem link: https://codeforces.com/contest/514/problem/B

#include <bits/stdc++.h>

#define kill return 0
#define PI  3.14159265358979323846
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void IO() {
    #ifdef LOCAL_MACHINE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}


int main() {
    IO();
    int enemiesNum,yaxis = 0, x, y;
    pair<int,int> gun;
    set<double> slope;
    vector<pair<int,int>> enemies;
    cin >> enemiesNum >> x >> y;
    gun = make_pair(x,y);
	for (int i = 0; i < enemiesNum; ++i)
	{
		cin >> x >> y;
		enemies.push_back(make_pair(x,y));
	}
 
	for (auto item : enemies)
	{
		if(gun.first == item.first)
			yaxis = 1;
		else
			slope.insert((item.second - gun.second)/(double)(item.first - gun.first));
	}
 
	cout << slope.size() + yaxis << endl;

    kill;
}