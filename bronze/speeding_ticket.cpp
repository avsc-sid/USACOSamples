#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);
    int n, m, i, j, speed=0, milesPassed=0, amt;
    cin >> n >> m;
    int segLength[n], segLimit[n], cowLength[m], cowLimit[m];

    for (i = 0; i < n; i++) {
        cin >> segLength[i] >> segLimit[i];
    }
    for (i = 0; i < m; i++) {
        cin >> cowLength[i] >> cowLimit[i];
    }

    for (i = 0, j = 0; i < n && j < m; i++) {
        while (segLength[i]) {
            amt = min(segLength[i], cowLength[j]);
            milesPassed+=amt;
            segLength[i]-=amt;
            cowLength[j]-=amt;
            speed = max(speed, cowLimit[j] - segLimit[i]);

            if (!cowLength[j]) {
                j++;
            }
        }
    }

    cout << speed;
}