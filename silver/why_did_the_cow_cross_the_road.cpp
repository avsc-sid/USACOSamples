#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using uint = unsigned int;
using ulong = unsigned long;
using ull = unsigned long long;
#define endl "\n"

#define difference pair<ulong, ulong>

bool cmpDifference(difference a, difference b) {
  return a < b.diff || (a.diff == b.diff && a.startTime < b.startTime);
}

long searchLowestInRange(vector<difference>& D, ulong l, ulong h, ulong time) {
    while (l < h) {
        ulong mid = l + (h-l)/2;

        if (D[mid].startTime <= time)
            l = mid+1;
        else
            h = mid;
    }

    if (D[l].startTime <= time && time <= D[l].startTime + D[l].diff)
        return l;
    return -1;
}

int main() {
    freopen("helpcross.in", "r", stdin);
    freopen("helpcross.out", "w", stdout);

    uint C, N, i, countOfPairs = 0;
    cin >> C >> N;

    ulong T[C], temp, temp2;
    std::vector<difference> D(N+1);
    for (i = 0; i < C; ++i)
        cin >> T[i];

    for (i = 0; i < N; ++i) {
        cin >> temp >> temp2;
        D[i] = {temp, temp2 - temp};
    }

    sort(T, T+C, greater<ulong>());
    sort(D.begin(),D.begin()+N, cmpDifference);
    for (i = 0; i < C; ++i) {
        long lowest = searchLowestInRange(D, 0, N-1, T[i]);
        if (lowest != -1) {
            ++countOfPairs;
            
        }
    }

    cout << countOfPairs << endl;

    return 0;
}