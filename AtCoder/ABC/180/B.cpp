/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 19.02.2021 14:21:46 UTC+7
 * Last Modified Date: 19.02.2021 14:25:07 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<double> A(n);
    for (auto &a : A) cin >> a;
    double d1 = 0, d2 = 0, d3 = 0;
    for (auto &a : A) {
        d1 += abs(a);
        d2 += a*a;
        d3 = max(d3, abs(a));
    }
    cout << fixed << setprecision(9);
    cout << d1 << '\n';
    cout << sqrt(d2) << '\n';
    cout << d3 << '\n';
    return 0;
}

