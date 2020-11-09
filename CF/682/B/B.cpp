/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 06.11.2020 10:47:19 UTC+7
 * Last Modified Date: 06.11.2020 11:01:21 UTC+7
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
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    sort(all(A));
    int ans = 1;
    for (int i = 0; i < n; i++) {
        if (A[i] >= ans) ans++;
    }
    cout << ans << '\n';
    return 0;
}

