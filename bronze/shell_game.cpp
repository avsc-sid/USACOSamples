#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
    int n, g, a, b, i, j;
    int shells[3] = {0, 1, 2}, score[3] = {0, 0, 0};
    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> a >> b >> g;
        a--; b--; g--;
        swap(shells[a], shells[b]);
        score[shells[g]]++;
    }

    cout << max({score[0], score[1], score[2]});
}