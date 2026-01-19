#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using uint = unsigned int;
using ulong = unsigned long;
using ull = unsigned long long;
#define endl "\n"

int main() {
    freopen("haybales.in", "r", stdin);
    freopen("haybales.out", "w", stdout);

    cin.tie(0)->sync_with_stdio(0);

    long n, q, i, temp;
    long *low, *high;
    cin >> n >> q;
    long haybales[n], A[q], B[q];
    for (i = 0; i < n; ++i) cin >> haybales[n];
    sort(haybales, haybales+n);

    for (i = 0; i < q; ++i) {
        cin >> A[i] >> B[i];
        low = lower_bound(haybales, haybales+n, A[i]);
        high = upper_bound(haybales, haybales+n, B[i]);

        cout << high-low << endl;
    }
}