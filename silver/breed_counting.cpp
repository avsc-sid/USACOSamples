#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using uint = unsigned int;
using ulong = unsigned long;
using ull = unsigned long long;
#define endl "\n"

int main() {
    freopen("bcount.in", "r", stdin);
    freopen("bcount.out", "w", stdout);
    long n, q, i, a, b;
    cin >> n >> q;
    int cows[n];
    long holsteins[n+1], guernsays[n+1], jerseys[n+1];

    for (i = 0; i < n; i++) {
        cin >> cows[i];
        holsteins[i+1] = holsteins[i];
        guernsays[i+1] = guernsays[i];
        jerseys[i+1] = jerseys[i];

        if (cows[i] == 1)
            holsteins[i+1]++;
        else if (cows[i] == 2)
            guernsays[i+1]++;
        else
            jerseys[i+1]++;
    }

    for (i = 0; i < q; i++) {
        cin >> a >> b;

        cout << holsteins[b] - holsteins[a-1] << " " << guernsays[b] - guernsays[a-1] << " " << jerseys[b] - jerseys[a-1] << endl;
    }
}