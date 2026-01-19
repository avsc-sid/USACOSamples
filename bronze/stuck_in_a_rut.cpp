#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl "\n"

struct cow {
    bool direction;
    ll x, y, cells;
};

ll minCells(ll a, ll b) {
    if (a == -1) return b;
    if (b == -1) return a;
    return min(a, b);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, i, j;
    ll distanceN, distanceE;
    cin >> n;
    char temp;

    cow cows[n];
    for (i = 0; i < n; i++) {
        cin >> temp >> cows[i].x >> cows[i].y;
        if (temp == 'N') {
            cows[i].direction = true;
        } else {
            cows[i].direction = false;
        }
        cows[i].cells = -1;
    }

    for (i = 0; i < n; i++) {
        if (!cows[i].direction) continue;
        for (j = 0; j < n; j++) {
            if (cows[j].direction) continue;
            if (cows[i].x < cows[j].x || cows[i].y > cows[j].y) continue;

            distanceN = cows[j].y - cows[i].y;
            distanceE = cows[i].x - cows[j].x;

            if (distanceN > distanceE) {
                cows[i].cells = minCells(cows[i].cells, distanceN);
            } else if (distanceE > distanceN) {
                cows[j].cells = minCells(cows[j].cells, distanceE);
            }
        }
    }

    for (i = 0; i < n; i++) {
        if (cows[i].cells == -1) {
            cout << "Infinity" << endl;
        } else {
            cout << cows[i].cells << endl;
        }
    }
}