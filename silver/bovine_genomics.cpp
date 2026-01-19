#include <bits/stdc++.h>
using namespace std;

const map<char, int> KEY = {{'A', 0}, {'C', 1}, {'G', 2}, {'T', 3}};
int main() {
    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout);
    int n, m, i, j, k, cow, count=0, p, s;
    cin >> n >> m;
    int plain[n][m], spotty[n][m];
    char temp;
    unordered_set<int> genomesPlain;

    bool isUnique;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cin >> temp;
            spotty[i][j] = KEY.at(temp);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cin >> temp;
            plain[i][j] = KEY.at(temp);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = i+1; j < m; j++) {
            for (k = j+1; k < m; k++) {
                isUnique = true;

                for (cow = 0; cow < n; cow++) {
                    genomesPlain.insert(plain[cow][i]*256 + plain[cow][j]*16 + plain[cow][k]);
                }

                for (cow = 0; cow < n; cow++) {
                    if (genomesPlain.count(spotty[cow][i]*256 + spotty[cow][j]*16 + spotty[cow][k])) {
                        isUnique=false;
                        break;
                    }
                }

                count+=isUnique;
                genomesPlain.clear();
            }
        }
    }

    cout << count;
}