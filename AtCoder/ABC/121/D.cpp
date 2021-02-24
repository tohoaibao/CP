/**
 * File              : D.cpp
 * Author            : Bao To Hoai
 * Date              : 22.02.2021 16:24:29 UTC+7
 * Last Modified Date: 22.02.2021 16:25:33 UTC+7
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
    int64_t a, b;
    cin >> a >> b;
    int64_t ans = 0;
    for (int i = a; i <= b; i++) {
        ans ^= i;
    }
    cout << ans << '\n';
    return 0;
}

