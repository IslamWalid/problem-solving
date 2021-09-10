// Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=235

#include <bits/stdc++.h>

#define terminate return 0
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
    int n, l; cin >> n;
    
    while (n--) {
        cin >> l;
        int inversions = 0;
        int train[l];

        for (int i = 0; i < l; i++)
            cin >> train[i];
        
        for (int i = 0; i < l; i++)
            for (int j = i + 1; j < l; j++)
                if (train[i] > train[j])
                    inversions++;
        
        cout << "Optimal train swapping takes " << inversions << " swaps." << endl;

    }
    
    return 0;
}