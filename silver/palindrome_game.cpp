#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using uint = unsigned int;
using ulong = unsigned long;
using ull = unsigned long long;
#define endl "\n"

int main() {
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);

    int A, Acap, B, Bcap, C, Ccap, temp, sum;
    cin >> Acap >> A >> Bcap >> B >> Ccap >> C;

    sum = A + B;
    temp = min(Bcap, sum);
    A = A + B - temp;
    B = temp;

    sum = B + C;
    temp = min(Ccap, sum);
    B = B + C - temp;
    C = temp;

    sum = A + C;
    temp = min(Acap, sum);
    C = C + A - temp;
    A = temp;

    sum = A + B;
    temp = min(Bcap, sum);
    A = A + B - temp;
    B = temp;

    cout << A << endl <<  B << endl << C;
}