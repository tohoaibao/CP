/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 07.03.2021 09:06:34 UTC+7
 * Last Modified Date: 07.03.2021 09:11:49 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int x, ans = 0;
    std::cin >> x;
    for (int n = 105; n <= x; n += 2) {
        int cnt = 0;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) cnt++;
        }
        if (cnt == 8) ans++;
    }
    std::cout << ans << '\n';
    return 0;
}

