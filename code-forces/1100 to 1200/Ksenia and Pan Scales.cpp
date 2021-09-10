// Problem link: https://codeforces.com/contest/382/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    string scale, extra; cin >> scale >> extra;
    int middle;
    string left, right;
    for (int i = 0; i < scale.length(); i++)
    {
        if (scale[i] == '|') 
        {
            left = scale.substr(0, i);
            right = scale.substr(i + 1, scale.length() - i  + 1);
        }
    }
    if (abs((int)left.length() - (int)right.length()) <= extra.length())
    {
        for (auto ch : extra)
        {
            if (left.length() > right.length())
                right += ch;
            else if (left.length() < right.length())
                left += ch;
            else
                left += ch;
        }
    }
    if (left.length() == right.length())
        cout << left << "|" << right << endl;
    else
        cout << "Impossible\n";
    return 0;
}