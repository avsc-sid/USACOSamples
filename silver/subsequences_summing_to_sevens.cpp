#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using uint = unsigned int;
using ulong = unsigned long;
using ull = unsigned long long;
#define endl "\n"

int main() {
    freopen("div7.in", "r", stdin);
    freopen("div7.out", "w", stdout);
    uint n, i, j;
    cin >> n;
    ulong cows[n];
    ulong prefix[n+1];
    long r, l, largest=0;

    prefix[0] = 0;
    for (i = 0; i < n; i++) {
        cin >> cows[i];
        prefix[i+1] = (prefix[i] + cows[i])%7;
    }

    for (i = 0; i < 7; i++) {
        r=-1;
        l=-1;

        for (j = 1; j < n+1; j++) {
            if (prefix[j] == i) {
                if (r == -1)
                    r = j;
                else
                    l = j;
            }
        }

        if (l != -1 && r != -1)
            largest = max(largest, l-r);
    }

    cout << largest;
}