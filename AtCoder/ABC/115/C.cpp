/**
 * File              : C.cpp
 * Author            : Bao To Hoai
 * Date              : 24.02.2021 22:25:54 UTC+7
 * Last Modified Date: 24.02.2021 22:28:53 UTC+7
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
    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    for (int &a : A) cin >> a;
    sort(all(A));
    int ans = (int)1e9;
    for (int i = 0; i < n - k + 1; i++) {
        ans = min(ans, A[i + k - 1] - A[i]);
    }
    cout << ans << '\n';

    return 0;
}

