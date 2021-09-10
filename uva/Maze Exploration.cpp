//Problem link: https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=725

#include <bits/stdc++.h>

#define kill return 0
#define PI  3.14159265358979323846
#define space ' '
#define MOD 1000000007

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void IO() {
    #ifdef LOCAL_MACHINE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}



bool visited[30][80];
int di[] = {-1, 1, 1, -1, 0, 1, 0, -1};
int dj[] = {-1, 1, -1, 1, 1, 0, -1, 0};

void paint(vector<string> &rooms, int startI, int startJ) {
    if (!visited[startI][startJ] && (rooms[startI][startJ] == ' ' || rooms[startI][startJ] == '*')) {
        visited[startI][startJ] = true;
        rooms[startI][startJ] = '#';
        for (int i = 0; i < 8; i++) {
            int x = di[i] + startI;
            int y = dj[i] + startJ;
            if (!visited[x][y] && rooms[x][y] != 'X')
                paint(rooms, x, y);
        }
    }

}

int main() {
    IO();
    int t; cin >> t;
    cin.ignore();
    while (t--) {
        vector <string> rooms;
        string end;
        while (true) {
            string temp;
            getline(cin, temp);
            if (temp[0] != '_')
                rooms.push_back(temp);
            else {
                end = temp;
                break;
            }
        }
        memset(visited, 0, sizeof(visited));
        
        int startI = -1, startJ = -1;
        for (int i = 0; i < rooms.size(); i++) {
            for (int j = 0; j < rooms[i].length(); j++) {
                if (rooms[i][j] == '*') {
                    startI = i;
                    startJ = j;
                    break;
                }
            }
            if (startI != -1 && startJ != -1)
                break;
        }
        paint(rooms, startI, startJ);

        for (auto line: rooms)
            cout << line << endl;
        cout << end << endl;
        
    }

    kill;
}