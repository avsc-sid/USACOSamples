#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl "\n"

struct rect {
    int x1, x2, y1, y2;
    int area() { return (x2 - x1) * (y2 - y1); }
};

int intersectionArea(rect p, rect q) {
	return max(0, min(p.x2, q.x2) - max(p.x1, q.x1)) * max(0, min(p.y2, q.y2) - max(p.y1, q.y1));
}

int main() {
    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);

    rect bill1, bill2, truck;
    cin >> bill1.x1 >> bill1.y1 >> bill1.x2 >> bill1.y2;
    cin >> bill2.x1 >> bill2.y1 >> bill2.x2 >> bill2.y2;
    cin >> truck.x1 >> truck.y1 >> truck.x2 >> truck.y2;

    cout << bill1.area() + bill2.area() - intersectionArea(bill1, truck) - intersectionArea(bill2, truck);
    return 0;
}