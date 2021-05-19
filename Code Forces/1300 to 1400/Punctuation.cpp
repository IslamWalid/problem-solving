// Problem link: http://codeforces.com/problemset/problem/147/A

#include <bits/stdc++.h>

#define kill return 0
#define space " "

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    string text;
    getline(cin, text);
    for(int i = 0; i < text.length(); i++)
    {
        if(text[i] == ' ' && (text[i+1] == ',' || text[i+1] == '.' || text[i+1] == '!' || text[i+1] == '?' || text[i+1] == ' '))
        {
            text.erase(text.begin() + i);
            i--;
        }
        else if(text[i+1] != ' ' && (text[i] == ',' || text[i] == '.' || text[i] == '!' || text[i] == '?'))
            text.insert(i+1, " ");
    }

    cout << text << endl;
    return 0;
}