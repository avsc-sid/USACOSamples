#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("outofplace.in", "r", stdin);
    freopen("outofplace.out", "w", stdout);
    int n, i, outIndex, swapIndex, swaps=0;
    cin >> n;
    long cows[n];

    for (i = 0; i < n; i++) {
        cin >> cows[i];
    }

    for (i = 0; i < n-1; i++) {
        if (cows[i] > cows[i+1]) {
            if (i+2 == n || cows[i+1] > cows[i+2]) {
                outIndex = i+1;
            } else {
                outIndex = i;
            }
            break;
        }
    }

    while (true) {
        if (cows[outIndex] > cows[outIndex+1]) {
            swapIndex = outIndex+1;
            while (swapIndex+1 != n && cows[swapIndex]==cows[swapIndex+1]) {
                swapIndex++;
            }
            swap(cows[outIndex], cows[swapIndex]);
            outIndex=swapIndex;
            swaps++;
        } else if (cows[outIndex-1] > cows[outIndex]) {
            swapIndex=outIndex-1;
            while(swapIndex-1 != -1 && cows[swapIndex]==cows[swapIndex-1]) {
                swapIndex--;
            }
            swap(cows[outIndex], cows[swapIndex]);
            outIndex=swapIndex;
            swaps++;
        } else {
            break;
        }
    }

    cout << swaps;
    return 0;
}