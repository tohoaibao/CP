/**
 * File              : C.cpp
 * Author            : Bao To Hoai
 * Date              : 23.02.2021 15:53:04 UTC+7
 * Last Modified Date: 23.02.2021 15:54:37 UTC+7
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
    vector<int> A(n);
    for (int &a : A) cin >> a;
    int ans = A[0];
    for (int i = 1; i < n; i++) {
        if (A[i] > A[i - 1]) ans += A[i] - A[i - 1];
    }
    cout << ans << '\n';

    return 0;
}

