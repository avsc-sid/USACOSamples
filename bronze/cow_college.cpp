#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    long long N, sum, i, min = 0, acceptedCows = 0;
    cin >> N;
    long long c[N];

    for (i = 0; i < N; i++) {
        cin >> c[i];
        sum += c[i];
        min = max(min, c[i]);
    }

    for (i = 0; i < N; i++) {
        if (c[i] < min) {
            const bool accepted = min-c[i] < min/2;
            if (accepted) {
                min = c[i];
                acceptedCows++;
            }
        } else {
            acceptedCows++;
        }
    }

    long long totalTuition = min*acceptedCows;
    cout << min*acceptedCows << " " << min;
}