// Problem link: http://codeforces.com/contest/677/problem/A

#include <iostream>
 
using namespace std;
 
int main()
{
    int n , h , sum =0 ;
    cin >> n >> h;
    int friends[n];
    for(int i=0 ; i<n ; i++)
    {
        cin >> friends[i];
    }
    for(int i=0 ; i<n ; i++)
    {
        if(friends[i]<= h)
            sum +=1;
        else if(friends[i]>h)
            sum+=2;
    }
    cout << sum << endl;
    return 0;
}