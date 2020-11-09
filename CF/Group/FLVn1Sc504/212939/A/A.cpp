/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 06.11.2020 09:55:24 UTC+7
 * Last Modified Date: 06.11.2020 10:14:17 UTC+7
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
    vector<int> dp(n + 1);
    vector<bool> broken(n + 1);
    for (int i = 0; i < k; i++) {
        int x;
        cin >> x;
        broken[x] = true;
    }
    dp[1] = 1;
    if (!broken[2]) dp[2] = 1;
    const int MOD = 14062008;
    for (int i = 3; i <= n; i++) {
        int x = broken[i - 1] ? 0 : dp[i - 1];
        int y = broken[i - 2] ? 0 : dp[i - 2];
        dp[i] = (x + y) % MOD;
    }
    cout << dp[n] << '\n';
    return 0;
}

