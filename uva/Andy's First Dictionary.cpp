// Problem link: https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1756

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
    string word;
    set<string> words;
    
    while (cin >> word)
    {   
        string current = "";
        for (int i = 0; i < word.length(); i++)
        {
            if (isalpha(word[i])) 
            {
                word[i] = tolower(word[i]);
                current += word[i];
            }
            else if (current != "")
            {
                words.insert(current);
                current = "";
            }
        }
        if (current != "")
            words.insert(current);
    }
    
    for (auto word: words)
        cout << word << '\n';
    return 0;
}