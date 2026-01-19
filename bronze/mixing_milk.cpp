#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);
    long bucketCap[3], bucketAmount[3], next;
    int i, j=0;

    for (i = 0; i < 3; i++) {
        cin >> bucketCap[i] >> bucketAmount[i];
    }

    for (i = 0; i < 100; i++) {
        next = (j+1)%3;
        bucketAmount[next] += bucketAmount[j];
        bucketAmount[j] = 0;
        if (bucketAmount[next] > bucketCap[next]) {
            bucketAmount[j] = bucketAmount[next] - bucketCap[next];
            bucketAmount[next] = bucketCap[next];
        }
        j=next;
    }

    for (i = 0; i < 3; i++) {
        cout << bucketAmount[i] << "\n";
    }
}