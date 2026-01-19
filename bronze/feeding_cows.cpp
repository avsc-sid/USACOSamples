#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    long N, K, T, i, farthestGCow, farthestHCow, min;
    cin >> T;

    while (T) {
        cin >> N >> K;

        const long K1 = K+1;
        char S[N], patch[N];
        cin >> S;

        farthestGCow = std::find(S, S+N, 'G') - S;
        farthestHCow = std::find(S, S+N, 'H') - S;
        for (i = 0; i < N; i++) {
            long x = i-farthestGCow, y = i-farthestHCow;
            if (x == K1) {
                patch[i] = 'G';
                farthestGCow = std::find(S+i+1, S+N, 'G') - S;
                min++;
            } else if (y == K1) {
                patch[i] = 'H';
                farthestHCow = find(S+i+1, S+N, 'H') - S;
                min++;
            } else {
                patch[i] = '.';
            }
        }

        cout << min << "\n";
        for (i = 0; i < N; i++) {
            cout << patch[i];
        }
        cout << "\n";

        min = 0;
        T--;
    }
}