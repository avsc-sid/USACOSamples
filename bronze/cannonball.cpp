#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl "\n"

int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n, pos, i, k=1, count=0;
    bool direction = true;
    cin >> n >> pos;
    pos-=1;
    long line[n], value[n];
    for (i = 0; i < n; i++) {
        cin >> line[i] >> value[i];
    }

    if (line[pos]==1 && k >= value[pos]) {
        count++;
        line[pos] = 2;
    } else if (!line[pos]) {
        k+=value[pos];
        direction=!direction;
    }

    for (i = 0; i < n*100; i++) {
        direction ? pos+=k : pos-=k;

        if (pos < 0 || pos >= n) break;

        if (line[pos]==1 && k >= value[pos]) {
            count++;
            line[pos] = 2;
        } else if (!line[pos]) {
            k+=value[pos];
            direction=!direction;
        }
    }

    cout << count << endl;
}