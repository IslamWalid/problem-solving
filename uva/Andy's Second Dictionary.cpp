// Problem link: https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2003

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
    string word, buffer;
    set <string> dict;
    
    while (cin >> word) {
        for (int i = 0; i < word.length(); i++) {
            if (isalpha(word[i])) {
                word[i] = tolower(word[i]);
                buffer += word[i];
            }
            else if (word[i] == '-' && i != word.length() - 1)
                buffer += word[i];
            else if (isalpha(word[i]) && i == word.length() - 1){
                word[i] = tolower(word[i]);
                buffer += word[i];
                dict.insert(buffer);
                buffer = "";
            }
            else if (!isalpha(word[i]) && word[i] != '-') {
                if (buffer != "") {
                    dict.insert(buffer);
                    buffer = "";
                }
            }
        }
        if (buffer != "" && word[word.length() - 1] != '-') {
            dict.insert(buffer);
            buffer = "";
        }
    }

    for (auto word: dict)
        cout << word << endl;
    
    return 0;
}