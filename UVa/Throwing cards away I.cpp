// Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1876#google_vignette

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
    int n, temp;
    queue <int> deck;
    while (cin >> n) {
        if (n == 0)
            break;
        
        for (int i = 0; i < n; i++)
            deck.push(i+1);

        cout << "Discarded cards:";
        while (deck.size() > 1) {
            temp = deck.front();
            deck.pop();
            if (deck.size() == 1)
                cout << space << temp;
            else
                cout << space << temp << ",";

            temp = deck.front();
            deck.pop();
            deck.push(temp);
        }
        cout << endl;
        temp = deck.front();
        cout << "Remaining card: " << temp << endl;
        deck.pop();
    }
    return 0;
}