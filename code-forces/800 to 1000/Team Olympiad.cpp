// Problem link: https://codeforces.com/contest/490/problem/A

#include <bits/stdc++.h>

using namespace std;

int minTeams(int arr[], int size);

int main() {
    int n, teams;
    int one, two, three;
    cin >> n;
    int students[n];

    int multiSet[3] = {0};
    for (int i = 0; i < n; ++i) {
        cin >> students[i];
        multiSet[students[i] - 1]++;
    }

    int programming[multiSet[0]];
    int maths[multiSet[1]];
    int pe[multiSet[2]];
    teams = minTeams(multiSet, 3);
    one = two = three = 0;

    for (int i = 0; i < n; ++i) {
        if (students[i] == 1)
            programming[one++] = i + 1;
        else if (students[i] == 2)
            maths[two++] = i + 1;
        else
            pe[three++] = i + 1;
    }

    cout << teams << endl;

    one = two = three = 0;
    for (int i = 0; i < teams; ++i) {
        cout << programming[one++] << " " << maths[two++] << " " << pe[three++] << endl;
    }
    return 0;
}

int minTeams(int arr[], int size) {
    int result = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < result) {
            result = arr[i];
        }
    }
    return result;
}