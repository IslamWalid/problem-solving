//Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=565

#include <bits/stdc++.h>

#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define kill return 0
#define PI  3.14159265358979323846
#define space ' '

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int n, tracks, ans = 0;
vector<int> res;
vector<int> v;

void bk (int index, int arr[]) {
    if (index == tracks) {
        int sum = 0;
        for (auto item: v) {
            sum += item;
        }
        if (sum <= n) {
            if (sum > ans) {
                ans = sum;
                res.clear();
                for (auto item: v)
                    res.push_back(item);
            }
        }
        return;
    }
    v.push_back(arr[index]);
    bk(index + 1, arr);
    v.pop_back();
    bk(index + 1, arr);

}

int main() {
    IO;
    while (cin >> n >> tracks) {
        int arr[tracks];
        for (int i = 0; i < tracks; i++)
            cin >> arr[i];
        bk(0, arr);
        for (auto item: res)
            cout << item << space;
        cout << "sum:" << ans << endl;
        ans = 0;
    }

    kill;
}