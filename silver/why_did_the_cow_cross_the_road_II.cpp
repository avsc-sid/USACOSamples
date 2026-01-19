#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using uint = unsigned int;
using ulong = unsigned long;
using ull = unsigned long long;
#define endl "\n"

int main() {
    freopen("maxcross.in", "r", stdin);
    freopen("maxcross.out", "w", stdout);
    long n, k, b, i, t;
    cin >> n >> k >> b;
    long signals[n] = {0}, prefix[n+1];

    for (i = 0; i < b; i++) {
        cin >> t;
        signals[t]++;
    }

    for (i = 0; i < n; i++) {
        prefix[i+1] = prefix[i] + signals[i];
    }

    
}