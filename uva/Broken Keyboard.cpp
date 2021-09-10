// Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3139

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
    string line, cur;
    deque<string> newline;
    bool right = true;
    while (cin >> line) {
        if (cin.eof())
            break;
        for (int i = 0, j = 0; i < line.length(); i++) {
            if (line[i] == '[') {
                if (right)
                    newline.push_back(cur);
                else
                    newline.push_front(cur);
                right = false;
                cur = "";
            }
            else if (line[i] == ']') {
                if (right)
                    newline.push_back(cur);
                else
                    newline.push_front(cur);
                right = true;
                cur = "";
            }
            else
                cur += line[i];
        }

        if (right)
            newline.push_back(cur);
        else
            newline.push_front(cur);
        cur = "";

        for (string str : newline)
            cout << str;
        cout << endl;

        newline.clear();
    }
    return 0;
}