#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    long long T, N, i, j, days, maxAmount;
    bool done;

    cin >> T;

    while (T) {
        cin >> N;
        long long h[N], a[N], t[N];

        for (i = 0; i < N; i++) {
            cin >> h[i];
        }
        for (i = 0; i < N; i++) {
            cin >> a[i];
        }
        for (i = 0; i < N; i++) {
            cin >> t[i];
        }

        // done with input

        days = 0;
        

        cout << days << "\n";
        T--;
    }
}