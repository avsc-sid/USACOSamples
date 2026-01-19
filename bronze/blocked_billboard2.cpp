#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl "\n"

struct rect {
    int x1, x2, y1, y2;
    long area() { return (x2 - x1) * (y2 - y1); }
};

bool covered(int x, int y, rect r) {
	return x >= r.x1 && x <= r.x2 && y >= r.y1 && y <= r.y2;
}

long intersectionArea(rect p, rect q) {
	return max(0, min(p.x2, q.x2) - max(p.x1, q.x1)) * max(0, min(p.y2, q.y2) - max(p.y1, q.y1));
}

int main() {
    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);
    rect feed, mower;
    cin >> mower.x1 >> mower.y1 >> mower.x2 >> mower.y2;
    cin >> feed.x1 >> feed.y1 >> feed.x2 >> feed.y2;
    int corners = 0;

    if (covered(mower.x1, mower.y1, feed)) corners++;
    if (covered(mower.x1, mower.y2, feed)) corners++;
    if (covered(mower.x2, mower.y1, feed)) corners++;
    if (covered(mower.x2, mower.y2, feed)) corners++;

    if (corners == 4) {
        cout << 0;
    } else if (corners == 2) {
        cout << mower.area() - intersectionArea(feed, mower);
    } else {
        cout << mower.area();
    }
    return 0;
}