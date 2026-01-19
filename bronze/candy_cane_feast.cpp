#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, M, i, j, candyLeft, temp;
    cin >> N >> M;
    long long cows[N], candyCanes[M], eaten[M];

    for (i = 0; i < N; i++) {
        cin >> cows[i];
    }

    for (i = 0; i < M; i++) {
        cin >> candyCanes[i];
        eaten[i] = 0;
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            if (eaten[j] >= candyCanes[j]) {
                continue;
            }
            // candy from top to bottom
            // eaten is candy from bottom to top
            candyLeft = candyCanes[j] - eaten[j];

            if (cows[i] >= candyCanes[j]) {
                cows[i] += candyLeft;
                eaten[j] = candyCanes[j];
            } else if (cows[i] > eaten[j]) {
                temp = eaten[j];
                eaten[j] += cows[i];
                cows[i] += cows[i] - temp;
            }
        }
    }

    for (long long cow : cows) {
        cout << cow << "\n";
    }
    return 0;
}