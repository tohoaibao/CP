/**
 * File              : B1.cpp
 * Author            : Bao To Hoai
 * Date              : 09.11.2020 13:51:58 UTC+7
 * Last Modified Date: 09.11.2020 13:57:49 UTC+7
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
    int m, n, x;
    cin >> m >> n;
    vector<int> dp(n + 1);
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> x;
            dp[j] = max(dp[j], dp[j - 1]) + x;
        }
        cout << dp[n] << " ";
    }
    cout << '\n';
    return 0;
}

