#include <bits/stdc++.h>
using namespace std;

long i;

void printArray(long arr[], int size) {
    int s = size-1;
    for (i = 0; i < size; i++) {
        cout << arr[i];
        if (i != s) {
            cout << " ";
        }
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    long N, K, T, times;
    cin >> N >> K >> T;
    long cows[N],  A[K], cowsTemp[N];

    for (i = 0; i < N; i++) {
        cows[i] = i;
        cowsTemp[i] = i;
    }
    for (i = 0; i < K; i++) {
        cin >> A[i];
    }
    for (times = 0; times < T; times++) {
        printArray(cows, N);
        cout << " T = " << times << "\n";
        for (i = 0; i < K; i++) {
            //rotation
            cowsTemp[A[(i+1)%K]] = cows[A[i]];
        }
        copy(cowsTemp, cowsTemp+N, cows);
        for (i = 0; i < K; i++) {
            //shifting
            A[i]=(A[i]+1)%N;
        }
    }

    printArray(cows, N);
    return 0;
}