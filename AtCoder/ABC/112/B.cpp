/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 25.02.2021 13:11:37 UTC+7
 * Last Modified Date: 25.02.2021 13:16:41 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n, t;
    std::cin >> n >> t;
    int inf = 99999;
    int ans = inf;
    for (int i = 0; i < n; i++) {
        int x, y;
        std::cin >> x >> y;
        if (y <= t) {
            ans = std::min(ans, x);
        }
    }
    if (ans == inf) {
        std::cout << "TLE\n";
    } else {
        std::cout << ans << '\n';
    }

    return 0;
}

