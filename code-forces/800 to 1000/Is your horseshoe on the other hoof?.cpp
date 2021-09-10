// Problem link: http://codeforces.com/contest/228/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int counter = 0;
    int shoe[4];
    for(int i=0 ; i<4 ; i++){
        cin >> shoe[i];
    }
    for(int i=0 ; i<4 ; i++){
        for(int j = i+1 ; j<4 ; j++){
            if(shoe[i] == shoe[j]){
                counter++;
                break;
            }
        }
    }
    cout << counter << endl;
    return 0;
}