#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl "\n"

struct rect {
    int x1, x2, y1, y2;
};

int main() {
    freopen("square.in", "r", stdin);
    freopen("square.out", "w", stdout);
    rect one, two;
    cin >> one.x1 >> one.y1 >> one.x2 >> one.y2;
    cin >> two.x1 >> two.y1 >> two.x2 >> two.y2;

    int x1 = min(one.x1, two.x1), y1 = min(one.y1, two.y1),
        x2 = max(one.x2, two.x2), y2 = max(one.y2, two.y2),
        xdiff = x2-x1, ydiff = y2-y1;

    if (xdiff > ydiff) {
        y2 = y1+xdiff;
    } else if (ydiff > xdiff) {
        x2 = x1+ydiff;
    }

    cout << (x2-x1) * (y2-y1);
}