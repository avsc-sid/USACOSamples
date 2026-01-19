#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl "\n"

int main() {
    cin.tie(nullptr); cin.sync_with_stdio(false);
    long n, count=0, i, j, c;
    cin >> n;
    vector<ll> a(n);
    for (i = 0; i < n; i++) {
        cin >> a[i];

        for (j = i-1, c=2; j >= 0; j--, c++) {
            a[i]+=a[j]*c;
        }

        a[i]*=-1;
        count+=abs(a[i]);
    }

    cout << count;
    return 0;
}