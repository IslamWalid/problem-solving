// Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3948

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
    int n; cin >> n;
    string old_line, new_line;
    while (n--) {
        cin >> old_line >> new_line;
        string key, value;
        bool before = true;
        map <string, string> old_dict, new_dict;
        vector <string> add, remove, edit;

        for(int i = 1; i < old_line.length(); i++) {
            char c = old_line[i];
            if (isalnum(c)) {
                if (before)
                    key += c;
                else
                    value += c;
            }
            else if (c == ':')
                before = false;
            else if ((c == ',' || c == '}') && !key.empty()) {
                old_dict[key] = value;
                key = value = "";
                before = true;
            }
        }

        for(int i = 1; i < new_line.length(); i++) {
            char c = new_line[i];
            if (isalnum(c)) {
                if (before)
                    key += c;
                else
                    value += c;
            }
            else if (c == ':')
                before = false;
            else if ((c == ',' || c == '}') && !key.empty()) {
                new_dict[key] = value;
                key = value = "";
                before = true;
            }
        }


        for(auto item: old_dict) {
            auto it = new_dict.find(item.first);

            if (it == new_dict.end())
                remove.push_back(item.first);
            else if (it->second != item.second)
                edit.push_back(item.first);
        }

        for (auto item: new_dict) {
            auto it = old_dict.find(item.first);

            if (it == old_dict.end())
                add.push_back(item.first);
        }


        if (add.empty() && edit.empty() && remove.empty())
            cout << "No changes" << endl;
        else {
            if (!add.empty()) {
                cout << "+" << add[0];
                for (int i = 1; i < add.size(); i++)
                    cout << "," << add[i];
                cout << endl;
            }
            if (!remove.empty()) {
                cout << "-" << remove[0];
                for (int i = 1; i < remove.size(); i++)
                    cout << "," << remove[i];
                cout << endl;
            }
            if (!edit.empty()) {
                cout << "*" << edit[0];
                for (int i = 1; i < edit.size(); i++)
                   cout << "," << edit[i];
                cout << endl;
            }
        }
        cout << endl;
    }

    return 0;
}