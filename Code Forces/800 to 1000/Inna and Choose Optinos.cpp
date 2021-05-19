// Problem link: https://codeforces.com/problemset/problem/400/A

#include <bits/stdc++.h>

#define kill return 0
#define space " "

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    int n; cin >> n;
    int cnt = 0;
    string s;
    vector <string> table;
    string combinations[] = {"1x12", "2x6", "3x4", "4x3", "6x2", "12x1"};
    bool valid[6]{0};
    while (n--)
    {
        cin >> s;
        for(int i=0; i<6; i++)
        {
            switch (i)
            {
                case 0:
                    if (s.find('X') != s.npos)
                    {
                        cnt++;
                        valid[i] = true;
                    }
                    break;

                case 1:
                    table.emplace_back(s.substr(0, 6));
                    table.emplace_back(s.substr(6, 6));
                    for (int j = 0; j < 6; j++)
                    {
                        if (table[0][j] == 'X' && table[1][j] == 'X')
                        {
                            cnt++;
                            valid[i] = true;
                            break;
                        }
                    }
                    break;

                case 2:
                    table.emplace_back(s.substr(0, 4));
                    table.emplace_back(s.substr(4, 4));
                    table.emplace_back(s.substr(8, 4));
                    for (int j = 0; j < 4; j++)
                    {
                        if (table[0][j] == 'X' && table[1][j] == 'X' && table[2][j] == 'X')
                        {
                            cnt++;
                            valid[i] = true;
                            break;
                        }
                    }
                    break;

                case 3:
                    table.emplace_back(s.substr(0, 3));
                    table.emplace_back(s.substr(3, 3));
                    table.emplace_back(s.substr(6, 3));
                    table.emplace_back(s.substr(9, 3));
                    for (int j = 0; j < 3; j++)
                    {
                        if (table[0][j] == 'X' && table[1][j] == 'X' && table[2][j] == 'X' && table[3][j] == 'X')
                        {
                            cnt++;
                            valid[i] = true;
                            break;
                        }
                    }
                    break;

                case 4:
                    table.emplace_back(s.substr(0, 2));
                    table.emplace_back(s.substr(2, 2));
                    table.emplace_back(s.substr(4, 2));
                    table.emplace_back(s.substr(6, 2));
                    table.emplace_back(s.substr(8, 2));
                    table.emplace_back(s.substr(10, 2));
                    for (int j = 0; j < 2; j++)
                    {
                        if (table[0][j] == 'X' && table[1][j] == 'X' && table[2][j] == 'X' && table[3][j] == 'X' && table[4][j] == 'X' && table[5][j] == 'X')
                        {
                            cnt++;
                            valid[i] = true;
                            break;
                        }
                    }
                    break;

                case 5:
                    if(s.find('O') == s.npos)
                    {
                        cnt++;
                        valid[i] = true;
                    }
                    break;
            }
            table.clear();
        }
        cout << cnt << space;
        for(int i = 0; i < 6; i++)
        {
            if(valid[i])
                cout << combinations[i] << space;
        }
        cout << endl;
        cnt = 0;
        for(int i = 0; i < 6; i++)
            valid[i] = false;
    }
    return 0;
}