// Problem link: http://codeforces.com/contest/731/problem/A

#include <bits/stdc++.h>

using namespace std;

int RightCH(char target, char initial);
int LeftCH(char target, char initial);
int Compare(int x , int y);
 
int main()
{
    int sum = 0;
    string name;
    cin >> name;
    sum = Compare(RightCH('a',name[0]),LeftCH('a',name[0]));
    for(int i=1 ; name[i] != '\0' ;i++)
    {
        sum += Compare(RightCH(name[i],name[i-1]),LeftCH(name[i],name[i-1]));
    }
    cout << sum << endl;
    return 0;
}
 
int RightCH(char target, char initial)
{
    int counter = 0;
    while(initial != target)
    {
        counter++;
        initial++;
        if(initial > 122)
            initial = 97;
    }
    return counter;
}
 
int LeftCH(char target, char initial)
{
    int counter = 0;
    while(initial != target)
    {
        counter++;
        initial--;
        if(initial < 97)
            initial = 122;
    }
    return counter;
}
 
int Compare(int x , int y)
{
    if(x <= y)
        return x;
    else
        return y;
}