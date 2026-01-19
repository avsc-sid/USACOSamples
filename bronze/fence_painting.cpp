#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);
    int a, b, c, d, i, total=0;
    bool fence[101];
    for (i = 0; i < 101; i++) { fence[i] = false; }
    cin >> a >> b >> c >> d;

    for (i = a; i < b; i++) {
        fence[i] = true;
    }

    for (i = c; i < d; i++) {
        fence[i] = true;
    }

    for (i = 0; i < 101; i++) {
        if (fence[i]) {
            total++;
        }
    }

    cout << total;
}