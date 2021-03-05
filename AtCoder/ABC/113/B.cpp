/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 25.02.2021 09:39:34 UTC+7
 * Last Modified Date: 25.02.2021 09:47:59 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n, t, u;
    std::cin >> n >> t >> u;
    std::vector<int> A(n);
    for (int &a : A) std::cin >> a;
    int ans = 1;
    double curr = std::abs(t - A[0] * 0.006 - u);
    for (int i = 1; i < n; i++) {
        double next = std::abs(t - A[i] * 0.006 - u);
        if (next < curr) {
            curr = next;
            ans = i + 1;
        }
    }
    std::cout << ans << '\n';

    return 0;
}

