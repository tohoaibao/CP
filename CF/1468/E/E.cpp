/**
 * File              : E.cpp
 * Author            : Bao To Hoai
 * Date              : 28.12.2020 12:27:35 UTC+7
 * Last Modified Date: 28.12.2020 12:30:33 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

void solve() {
    vector<int> A(4);
    for (int &a : A) {
        cin >> a;
    }
    sort(all(A));
    cout << A[0] * A[2] << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

