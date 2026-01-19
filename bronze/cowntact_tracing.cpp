#include <bits/stdc++.h>
using namespace std;

using i16 = int; using i32 = long; using i64 = long long;
using u16 = unsigned int; using u32 = unsigned long; using u64 = unsigned long long;
#define endl "\n"

int main() {
    cin.tie(0)->sync_with_stdio(0);
    u16 n, i, counter=0, middle;
    cin >> n;

    u16 cows[n], copy[n];
    for (i = 0; i < n; i++) {
        cin >> cows[i];
        cin >> copy[n];
    }

    for (i = 0; i < n; i++) {
        if (copy[i]) counter++;
        else if (counter) {
            copy[i-1] = 0;
            copy[i-1-counter] = 0;
        }
    }
}