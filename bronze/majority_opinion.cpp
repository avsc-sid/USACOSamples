#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl "\n"

int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n, j, count;
    int t, i;
    cin >> t;

    for (i = 0; i < t; i++) {
        cin >> n;
        long h[n];
        set<long> answers;

        for (j = 0; j < n; j++)
            cin >> h[j];

        if (n == 2) {
            if (h[0] == h[1])
                cout << h[0] << endl;
            else
                cout << "-1" << endl;

            continue;
        }

        for (j = 2; j < n; j++) {
            if (h[j] == h[j-1] || h[j] == h[j-2])
                answers.insert(h[j]);
            else if (h[j-1] == h[j-2])
                answers.insert(h[j-1]);
        }

        count = answers.size();
        if (!count)
            cout << "-1" << endl;
        else {
            for (auto answer : answers) {
                cout << answer;
                if (count!=1) {
                    cout << " ";
                }
                count--;
            }
            cout << endl;
        }
    }
}